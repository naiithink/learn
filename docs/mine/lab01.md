<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
<script type="text/x-mathjax-config">
    MathJax.Hub.Config({ tex2jax: {inlineMath: [['$', '$']]}, messageStyle: "none" });
</script>
<link rel="stylesheet" type="text/css" href="../../assets/mystyle.css" />

# LAB01

01418113-LAB, 2021

<br />

## 01 คอมพิวเตอร์ทำงาน

**คอมพิวเตอร์ทำงาน**

จงเขียนโปรแกรมเพื่อแสดงผลเวลาที่เครื่องคอมพิวเตอร์ทำงานในรูปของจำนวนวัน ชั่วโมง และนาที ตามลำดับ (ไม่ต้องคำนึง)

เมื่อตัวแปร `computer_time` เก็บค่าจำนวนนาทีที่เครื่องคอมพิวเตอร์ทำงาน

**ตัวอย่างผลลัพธ์เมื่อ `computer_time` มีค่า 785**

```
It is 0 days 13 hours and 5 minutes.
```

อธิบาย: คอมพิวเตอร์ทำงาน 785 นาที เท่ากับ 0 วัน 13 ชั่วโมง 5 นาที
    
**ตัวอย่างผลลัพธ์เมื่อ `computer_time` มีค่า 1678**

```
It is 1 days 3 hours and 58 minutes.
```

อธิบาย: คอมพิวเตอร์ทำงาน 1678 นาที เท่ากับ 1 วัน 3 ชั่วโมง 58 นาที

### Source

<div class="highlight">
<pre>
#include &lt;stdio.h&gt;<br />
void main()
{
    // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    int computer_time = 785;
<textarea id="q01_a01_01" rows="7" cols="70">
</textarea>
}
</pre>
</div>

### ;D

- ใน C เราไม่สามารถทำ flooring division — หารไม่เอาเศษ — ได้ (ใน Python คือ `//`)
- การ print เราอาจใช้ `printf()` ซึ่งเป็นการ print แบบ formatted output<br />
    ข้อมูลที่ถูก print ด้วยฟังก์ชันนี้จะถูก print ไปที่ standard output (`stdout`)
- Format specifier เบื้องต้นที่ใช้ใน `printf()`:

    | Specifier | Data Type | Description |
    | :-------: | :------- | :---------- |
    | `%c`      | `char`   | Character   |
    | `%s`      | `char[]`, `char *` | String (an array of characters) |
    | `%d`      | `int`    | Decimal integer (base 10) |
    | `%i`      | `int`    | Decimal integer (auto-detect the base) |
    | `%f` / `%lf` | `double`  | Double-precision floating point |
    | `%f`      | `float`  | Single-precision floating point |
    | `%%`      | -        | `%` itself  |
- `printf()` จะไม่มีการตัดจบบรรทัดให้ หากต้องการทำ เราอาจใช้ `\n` หรือ `\012`<br />
    ซึ่งเป็น escape sequence สำหรับ `NL line feed` หรือ `new line`

ข้อนี้เราต้องการแปลงเวลาจากหน่วย `นาที` ให้เป็น `วัน` `ชั่วโมง` และ `นาที` ตามลำดับ<br />
เราอาจทำได้โดยการนำค่านาทีที่ input เข้ามาไปหาแปลงเป็นหน่วยย่อย ๆ จากหน่วยที่ใหญ่ที่สุด<br />
ลดหลั่นลงไปจนถึงหน่วยที่เล็กที่สุด (ซึ่งในกรณีนี้ก็คือ `วัน` > `ชั่วโมง` > `นาที`)

```
day     ::= d
hour    ::= h
minute  ::= m

1 h  =  60 m
1 d  =  24 h  =  (60 * 24) m
```

#### Method A

```c
...

int days    = computer_time / (60 * 24);
int hours   = computer_time - (days * (60 * 24)) / 60);
int minutes = computer_time - (days * (60 * 24)) / 60);

...
```

#### Method B

```c
...

int minutes = computer_time % 60;
int hours   = (computer_time / 60) % 24;
int days    = (computer_time / 60) / 24;

...
```

#### Printing Out

```c
...

printf("It is %d days %d hours and %d minutes.\n", days, hours, mins);

...
```

### สรุป

```c
#include <stdio.h>

void main()
{
    // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    int computer_time = 785;

    int days    = computer_time / (60 * 24);
    int hours   = computer_time - (days * (60 * 24)) / 60);
    int minutes = computer_time - (days * (60 * 24)) / 60);

    printf("It is %d days %d hours and %d minutes.\n", days, hours, mins);
}
```

<br />

## 02 Sphere Volume

จงเขียนโปรแกรมเพื่อคำนวณค่าปริมาตร (volume) ของทรงกลมในรูปแบบทศนิยม 2 ตำแหน่ง<br />
โดยค่ารัศมี (ตัวแปร `radius`) เป็นจำนวนจริงโดยใช้การคำนวณจากสูตร

$$ volume = \frac{4}{3} \times \pi \times radius^{3} $$
กำหนดค่าคงที่ $\pi = \frac{22}{7}$<br />

**ตัวอย่างผลลัพธ์ เมื่อตัวแปร `radius` มีค่า 1.5**<br />

```
The volume of this sphere is 14.14
```

### Source

<div class="highlight">
<pre>
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;<br />
// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7<br />
void main()
{
    float radius = 1.5;
<textarea id="q01_a01_01" rows="6" cols="70">
</textarea>
}
</pre>
</div>

### ;D

- Type conversion: ใน C จะไม่มีการแปลง data type แบบ dynamic ให้<br />
    ในข้อนี้เราอาจดำเนินการโดยใช้ตัวเลขแบบ _floating point_ ไปเลย <span style="font-weight:bold;color:#FF5433;">แต่</span><br />
    <span style="text-decoration:underline;">ใน C version ก่อน ๆ</span> เวลาเรา assign ค่าแบบนี้

    ```c
    float f = 4.0;
    ```

    เบื้องหลังการทำงาน _อาจจะ_ นั้นจะเกิด **implicit type conversion** ด้วยนะ[^1]<br />
    คือ เวลาเราพิมพ์เลข `4.0` เลขนี้จะมี type เป็น `double`<br />
    และเมื่อเรา assign ให้ตัวแปรที่เป็น `float` เลยเกิดการแปลง type อยู่เบื้องหลัง

    ถ้าอยากจะ assign ค่าให้ `float` โดยไม่ให้เกิด implicit type conversion<br />
    เราก็อาจจะ assign แบบนี้

    ```c
    float f = 4.0f;
    ```

    แต่ถึงแม้เราจะ assign แบบโดยใช้ `4.0f` เวลาใช้งานจริง _บางกรณี_<br />
    จะมีการแปลงกลับให้เป็น `double` อยู่ดี<br />

    <span style="font-weight:bold;color:#0072BF;">แล้วทำไมเราไม่ declare และ assign แบบ `double` ไปเลย?</span><br />
    เพราะการใช้ตัวแปร `float` จะช่วยประหยัดพื้นที่เก็บข้อมูลไงล่ะ

    เช่น

    ```c
    float foo = 4.0 / 3.0;

    or

    float foo = 4.0 / 3;
    ```

    หรือ Type casting

    ```
    "(" type ")"  expression
    ```

    > Cast เป็น unary operator ดำเนินการจาก **Left <-- Right**

    เช่น

    ```c
    float foo = (float) 4 / (float) 3;

    or

    float foo = (float) 4 / 3;
    ```

    เป็นต้น
- Format placeholder เบื้องต้น:

    ```
    "%"  [ parameter ]  [ flags ]  [ width ]  [ "." precision ]  [ length ]  type
    ```

    [printf format string - wikipedia.org](https://en.wikipedia.org/wiki/Printf_format_string)

#### Method A

```c
...

float volume = 0.0;

volume = (4.0 / 3.0) * PI * (radius * radius * radius);

...
```

#### Method B

```c
...

float volume = 0.0;

volume = ((float) 4 / (float) 3) * PI * (radius * radius * radius);

...
```

#### Printing Out

With the precision of 2: `%.2f`

```c
...

printf("The volume of this sphere is %.2f\n", volume);

...
```

### สรุป

```c
#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

void main()
{
    float radius = 1.5;
    float volume = 0.0;

    volume = (4.0 / 3.0) * PI * (radius * radius * radius);

    printf("The volume of this sphere is %.2f\n", volume);
}
```

<br />

## 03 GPA Calculator

เขียนโปรแกรมเพื่อหาจำนวนเกรดเฉลี่ยที่ต้องทำในเทอมนี้ เพื่อให้ได้เกรดเฉลี่ยรวมที่ต้องการ<br />
โดยตัวแปรเก็บค่าต่าง ๆ ดังนี้

`preGrade` เก็บค่า เกรดเฉลี่ยสะสมที่ผ่านมา<br />
`preCredit` เก็บค่า หน่วยกิตสะสมที่คำนวณเกรดเฉลี่ยแล้ว<br />
`credit` เก็บค่า หน่วยกิตของเทอมนี้<br />
`requiredGrade` เก็บค่า เกรดเฉลี่ยรวมที่ต้องการ

**หมายเหตุ**

- เกรดเฉลี่ยที่คำนวณมาได้ แสดงเป็นทศนิยม 2 ตำแหน่ง
- หน่วยกิตเป็นจำนวนเต็ม
- เกรดเฉลี่ยที่คำนวณมาได้อาจมีค่าเกิน 4.00 (เพราะหวังสูง แต่ของเก่าไม่มากพอ)

**ตัวอย่างผลลัพธ์ของค่าที่ปรากฏในโปรแกรม**<br />

```
The GPA this semester should be 2.29
```
อธิบาย: ลงทะเบียนเรียนไปแล้ว 21 หน่วยกิต ได้เกรดเฉลี่ยสะสม 1.75<br />
และในเทอมนี้ลงทะเบียนเรียน 18 หน่วยกิต ต้องการเกรดเฉลี่ยสะสม 2.00<br />
จึงต้องทำเกรดเฉลี่ยเทอมนี้ให้ได้ 2.29

### Source

<div class="highlight">
<pre>
#include &lt;stdio.h&gt;<br />
void main()
{
    <textarea class="singleline" id="q01_a01_01"></textarea> preGrade = 1.75;
    <textarea class="singleline" id="q01_a01_02"></textarea> preCredit = 21;
    <textarea class="singleline" id="q01_a01_03"></textarea> credit = 18;
    <textarea class="singleline" id="q01_a01_04"></textarea> requiredGrade = 2.00;
<textarea id="q01_a01_05" rows="7" cols="70">
</textarea>
}
</pre>
</div>

### ;D

- 

#### จากโจทย์

- เกรดเฉลี่ยที่คำนวณมาได้ แสดงเป็นทศนิยม 2 ตำแหน่ง

    ```c
    float preGrade              ...
    float requiredGrade         ...
    ```

- หน่วยกิตเป็นจำนวนเต็ม

    ```c
    int preCredit               ...
    int credit                  ...
    ```

#### Method A

$$
GPAX = \frac{\sum{score}}{\sum{credit}}
$$

จะได้ว่า

$$
requiredGrade = \frac{(preGrade \times preCredit) + targetScore}{preCredit + credit}
$$

1. หา `targetScore`

    $targetScore = requiredGrade \times (preCredit + credit) - (preGrade \times     preCredit)$

    ```c
    float targetScore = 0.0f;

    targetScore = requiredGrade * (float) (preCredit + credit) - (preGrade * (float) preCredit);
    ```

2. หา `targetGrade`

    $targetGrade = \frac{targetScore}{credit}$

    ```c
    float targetGrade = 0.0f;

    targetGrade = targetScore / (float) credit;
    ```

### สรุป

```c
#include <stdio.h>

void main()
{
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;

    float targetScore = 0.0f;
    float targetGrade = 0.0f;

    targetScore = requiredGrade * (preCredit + credit) - (preGrade * preCredit);
    targetGrade = targetScore / (float) credit;

    printf("The GPA this semester should be %.2f\n", targetGrade);
}
```

<br />

## 04 Escape Squence (เพิ่มเติม)

### Escape Sequence

จงเติมคำสั่ง `printf` ข้างล่างให้มันพิมพ์ข้อความที่ปรากฏอยู่ที่ตารางช่องด้านซ้ายมือ

<table>
    <thead>
        <tr>
            <th>ผลลัพธ์</th>
            <th>คำสั่ง <code>printf</code></th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>
a.
<pre>
x
xx
xxx
 xx
  x
</pre>
</td>
<td>
<pre>
printf(<textarea id="q01_a01_01" class="singleline" cols="40"></textarea>);
</pre>
            </td>
        </tr>
        <tr>
            <td>
b.
<pre>
printf("Hello, world\n");
</pre>
            </td>
            <td>
<pre>
printf(<textarea id="q01_a01_02" class="singleline" cols="40"></textarea>);
</pre>
            </td>
        </tr>
    </tbody>
</table>

### ;D

<ol type="a">
    <li><code>xxx</code><br /><br />
<table>
    <tr>
        <td>
<pre>
x
xx
xxx
 xx
  x
</pre>
        </td>
        <td>
<pre>
printf("<code style="color:red;font-weight:bold;">x\n</code>");
printf("<code style="color:orange;font-weight:bold;">xx\n</code>");
printf("<code style="color:red;font-weight:bold;">xxx\n</code>");
printf("<code style="color:orange;font-weight:bold;"> xx\n</code>");
printf("<code style="color:red;font-weight:bold;">  x</code>");
</pre>
        </td>
    </tr>
</table>
<pre>
<code style="color:#BEBEBE;">printf("</code><code style="color:red;font-weight:bold;">x\n</code><code style="color:orange;font-weight:bold;">xx\n</code><code style="color:red;font-weight:bold;">xxx\n</code><code style="color:orange;font-weight:bold;"> xx\n</code><code style="color:red;font-weight:bold;">  x</code><code style="color:#BEBEBE;">");</code>
</pre>
    </li>
    <li><code>"printf("Hello, world");"</code><br /><br />
<pre>
printf(<code style="color:red;font-weight:bold;">"</code>Hello, world<code style="color:orange;font-weight:bold;">\n</code><code style="color:red;font-weight:bold;">"</code>);
       <code style="color:blue;font-weight:bold;">\            \ \</code>
</pre>
จะได้ว่า<br /><br />
<pre>
<code style="color:#BEBEBE;">printf("</code>printf(<code style="color:blue;font-weight:bold;">\</code><code style="color:red;font-weight:bold;">"</code>Hello, world<code style="color:blue;font-weight:bold;">\</code><code style="color:orange;font-weight:bold;">\n</code><code style="color:blue;font-weight:bold;">\</code><code style="color:red;font-weight:bold;">"</code>);<code style="color:#BEBEBE;">");</code>
</pre>
    </li>
</ol>

### สรุป

a.

```c
printf("x\nxx\nxxx\n xx\n  x");
```

b.

```c
printf("printf(\"Hello, world\\n\");");
```

<br />

## 05 ทอนเงิน (พิมพ์น้อยไปมาก)

### ทอนเงิน (อย่างง่าย)

สมมติว่ามีธนบัตรใบละ 50, 20, 5 และ 1 บาท ให้ตัวแปร `amount` เก็บค่าจำนวนเงินที่ต้องทอน (เป็นจำนวนเต็มเสมอ)<br />
แล้วแสดงผลลัพธ์เป็นจำนวนธนบัตรแต่ละชนิดที่ต้องทอน โดยกำหนดให้ทอนเป็นธนบัตรชนิดราคาสูงกว่าให้ได้มากที่สุดก่อน<br />
แต่ให้พิมพ์คำตอบเรียงลำดับจากธนบัตรชนิดราคาต่ำ ไปหาราคาสูงที่สุด

**ตัวอย่างผลลัพธ์เมื่อตัวแปร `amount` มีค่า <span class="exinput">98</span>**

```
1: 3
5: 1
20: 2
50: 1
```

**ตัวอย่างผลลัพธ์เมื่อตัวแปร `amount` มีค่า <span class="exinput">19</span>**

```
1: 4
5: 3
20: 0
50: 0
```

**ตัวอย่างผลลัพธ์เมื่อตัวแปร `amount` มีค่า <span class="exinput">50</span>**

```
1: 0
5: 0
20: 0
50: 1
```

พิมพ์โปรแกรมของคุณลงในช่องว่างข้างล่างนี้

### Source

<div class="highlight">
<pre>
#include &lt;stdio.h&gt;<br />
int main()
{
    int amount = ...;<br />
<textarea id="q01_a01_05" rows="14" cols="54">
</textarea>
}
</pre>
</div>

### ;D

#### Method A

```
let:
int amount = 98;
```

1. คำนวณหาจำนวนของธนบัตรแต่ละชนิดที่จะใช้สำหรับทอน

    ```c
    ...

    // let amount = 98;
    int amount = 98;

    int note50 = 0;
    int note20 = 0;
    int note5 = 0;
    int note1 = 0;

    note50 = amount / 50;
    amount = amount - note50 * 50;

    note20 = amount / 20;
    amount = amount - note20 * 20;

    note5 = amount / 5;
    amount = amount - note5 * 5;

    note1 = amount;

    ...
    ```
2. print ผลลัพธ์ที่ได้

    ```c
    ...

    printf("1: %d\n", note1);
    printf("5: %d\n", note5);
    printf("20: %d\n", note20);
    printf("50: %d\n", note50);

    ...
    ```

3. return `exit status` ของ `main()` อย่าง <span style="font-weight:bold;color:#FF5433;">explicitly!</span>

    ```c
    ...

    return 0;

    ...
    ```

### สรุป

```c
#include <stdio.h>

int main()
{
    int amount = ...;

    int note50 = 0;
    int note20 = 0;
    int note5 = 0;
    int note1 = 0;

    note50 = amount / 50;
    amount = amount - note50 * 50;

    note20 = amount / 20;
    amount = amount - note20 * 20;

    note5 = amount / 5;
    amount = amount - note5 * 5;

    note1 = amount;

    printf("1: %d\n", note1);
    printf("5: %d\n", note5);
    printf("20: %d\n", note20);
    printf("50: %d\n", note50);

    return 0;
}
```

[^1]: B. W. Kernighan and D. M. Ritchie, "C Reference Manual" in _The C Programming Language_, 1st ed., Englewood Cliffs, NJ, USA: Prentice Hall, 1978, Appendix A, sec 4, p. 183. <br />
    Also available at [https://archive.org/details/TheCProgrammingLanguageFirstEdition/](https://archive.org/details/TheCProgrammingLanguageFirstEdition/)