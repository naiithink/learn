<link rel="stylesheet" type="text/css" href="../../media/css/mystyle.css" />

<script type="text/javascript" src="../../media/js/formatting.js"></script>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
<script type="text/x-mathjax-config">MathJax.Hub.Config({ tex2jax: {inlineMath: [['$', '$']]}, messageStyle: "none" });</script>
<script type="text/javascript" src="https://cdn.jsdelivr.net/npm/mermaid/dist/mermaid.min.js"></script>
<script>mermaid.initialize({startOnLoad:true});</script>

<!-- begin document ######################################################## -->

# LAB<span class="theC">02</span>

01418113-LAB, 2021

<br />

## Notes

- **บางข้อที่มีตัวอย่างผลลัพธ์จากการ execute หรือ compiler program**  
    เพื่อให้ได้เห็นผลลัพธ์ที่หลากหลาย เราได้แนบผลลัพธ์ที่ได้จากหลาย ๆ platform[^1]  
    โดยใช้หลาย ๆ compiler[^2]
- **Semantic Versioning**  
    การอธิบายในบางข้อมีการแก้ไข source code หลายรอบ  
    เราเลยกำหนดการแก้ไขแต่ละครั้งเป็น 1 patch version  
    โดยอิงระบบ [Semantic Versioning](https://semver.org/) (ลองอ่านดู เราว่าเข้าใจไม่ยาก)  
    **ในไฟล์นี้** เรากำหนดให้
    - `0.1.*-rc` หมายถึง Release Candidate (เวอร์ชันนี้เกือบจะสมบูรณ์ละ)
    - `1.0.0` หมายถึง Stable Release (เวอร์ชันนี้เป็นสมบูรณ์)

<br />

## <span class="theC">01</span> Find Error

ตรวจสอบความถูกต้องของโปรแกรม ถ้าถูกต้องให้คัดลอกโปรแกรมใส่ด้านล่าง  
แต่ถ้าผิดให้แก้ไขให้ถูกต้อง

```c
#include <studio.h>
#include <stolib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: "):
    fget(hour_str, 3, stdin);

    printf("Enter minute: "):
    get(minstr);

    hour = atoi(hour_str);
    minute = atoi(minstr);

    printf("Time is %d:%d, hour, minute");
}
```

โดยให้แสดงผลตามตัวอย่างต่อไปนี้

### Sample output 1

<pre>
Enter hour: 9
Enter minute: 18
Time is 09:18
</pre>

### Sample output 2

<pre>
Enter hour: 10
Enter minute: 7
Time is 10:07
</pre>

**หมายเหตุ** เวลาส่วนของชั่วโมงและนาทีจำเป็นต้องแสดงเป็นเลข 2ตัว  
ให้ใช้บรรทัดเท่ากับตัวอย่างโปรแกรม มิฉะนั้น ข้อนี้จะได้ 0 แม้ว่าจะ P ครบทุกตัว

## Source

<div class="highlight">
<pre>
<textarea rows="19" cols="72">
</textarea>
</pre>
</div>

## ;D

- **Library คือ?**

    พูดง่าย ๆ Library คือ สิ่งที่รวมนิยาม (definition) ของ function, data type, และ macro  
    เราอาจจะมองเป็นกล่องเครื่องมือสำหรับการเขียนโปรแกรมก็ได้

    Standard library บาง lib มีชื่อขึ้นต้นด้วย <span class="theC">`std`</span> (<span class="theC">`standard`</span>)

    <details>
        <summary>ตัวอย่าง</summary>

    - <code><span class="theC">std</span><span style="color:orange;font-weight:bold;">io</span>.h</code> — <span class="theC">Standard</span> <span style="color:orange;font-weight:bold;">I</span>nput/<span style="color:orange;font-weight:bold;">O</span>utput — บ่ใช่ สะ-ตู-ดิ-โอ เด้อเจ้า
    - <code><span class="theC">std</span>lib.h</code> — Utility Functions — ถ้าจำเรื่อง exit status ของ `main()` ได้  
    ในนี้มี macro `EXIT_SUCCESS` และ `EXIT_FAILURE` ด้วย ลองเล่นดูได้ คลิก
    - <code><span class="theC">std</span>arg.h</code> — Variable Argument Lists — ใช้สร้างฟังก์ชันที่มีจำนวน argument  
    (input ที่เราใส่เข้าไปใน function) ไม่จำกัดได้ เจ๋งง

    </details> <!-- ตัวอย่าง -->

    เวลาเราจะใช้ library ใน <span class="theC">C</span> เราใช้ `#include` directive ตามด้วยไฟล์ที่เราต้องการ

    ```c
    #include <foo.h>
    ```

- **Compiler Directive**

    ___direct___ (vt.) แปลว่า สั่ง  
    ___directive___ (n.) แปลว่า คำสั่ง  
    ___compiler directive___ (n.) คือ คำสั่งที่สามารถสั่ง compiler ให้ทำอย่างนู้น ทำอย่างนี้ได้

    <details>
        <summary>เพิ่มเติม</summary>
    <code>#include</code> คือหนึ่งใน compiler directive ที่เราเอาไว้สั่ง compiler  
    ว่าก่อนจะ compile น่ะ ให้ใส่สิ่งที่อยู่ใน <code><ไฟล์นี้></code> เข้ามาในโปรแกรมเราด้วย  
    ถ้าอยากรู้ว่ามัน include อะไรเข้ามา ตอนจะ compile program, ใน <a href="https://en.wikipedia.org/wiki/Command-line_interface">CLI</a>

    ลอง

    ```bash
    <compiler>  -E  -CC  -P  <source_file>
    ```

    โดยที่ switch ต่าง ๆ หมายถึง:

    ```
    -E        Stop after the preprocessing stage.
    -CC       Do not discard comments, including during macro expansion.
    -P        Inhibit generation of linemarkers in the output from
            the preprocessor.

    ข้อมูลเพิ่มเติม ลอง `man gcc' แต่! เดี๋ยวก่อน เราออกจากหน้า manpage
                            ได้ด้วยการกดปุ่ม `Q' บนคีย์บอร์ดนาจา (เผื่อออกไม่เป็น)
    ```

    เช่น

    ```bash
    iam@catlover ~ $ gcc -E -CC -P main.c
    ```

    ถ้าไม่อยากดูผ่าน CLI เราทำเป็น text file ได้ด้วยการ [redirect output](https://en.wikipedia.org/wiki/Redirection_(computing))  
    โดยที่ไฟล์จะอยู่ใน directory, a.k.a. folder, ที่เราอยู่ปัจจุบันซึ่งเช็คได้ด้วยคำสั่ง  
    `pwd` (print working directory)

    ```
    <compiler>  -E  -CC  -P  <source_file>  >>  <output_file>
    ```

    เช่น

    ```
    gcc -E -CC -P main.c >> foo.txt
    ```
    </p>
    </details> <!-- เพิ่มเติม -->

- **The Standard <span class="theC">C</span> Library — `libstdc` / `libc`**

    ถ้าจะเขียนโปรแกรมโดยไม่ `include` อะไรเลยแล้วมีแค่ `main()` ชีวิตเราคงจะลำบากมาก   
    เราเลยมี **standard library** ที่ข้างในนั้นมีสิ่งอำนวยความสะดวกมากมายให้เราได้ใช้  
    เช่น `printf()`, `fgets()` , และ `rename()` เป็น &#x1F334;

- **Identifiers**

    เวลาเรานิยาม (define) function, data type, label  
    หรือ ประกาศ (declare) ตัวแปร เราจะตั้งชื่อให้มัน  
    เราเรียกชื่อต่าง ๆ ที่เราตั้งว่า ___identifier___ (n.) เพราะชื่อมีไว้ _identify_ หรือชี้ตัวมันไง

    <details>
        <summary>เพิ่มเติม</summary>

    **Predefined Identifiers**
    
    Identifier บางอันที่ถูก define ไว้แล้ว (เผื่อใช้ตอน debug)
    
    **เช่น**
    
    - `__LINE__` (decimal constant) เก็บค่าเลขบรรทัดที่ตัวมันอยู่
    - `__FILE__` (string literal) เก็บชื่อ source file ที่ตัวมันอาศัยอยู่
    - `__DATE__` (string literal) เก็บวันที่ที่ program ถูก compile — `Mmm dd yyyy`
    - `__TIME__` (string literal) เก็บเวลาที่ program ถูก compile — `hh:mm:ss`

    **ลอง**

    <pre>
    <span style="color:#858585;">123</span>    printf("  line:     %d\n", <span class="theC">__LINE__</span>);
    <span style="color:#858585;">124</span>    printf("  file:     %s\n", <span class="theC">__FILE__</span>);
    <span style="color:#858585;">125</span>    printf("  compiled: %s, %s\n", <span class="theC">__DATE__</span>, <span class="theC">__TIME__</span>);</pre>

    **Output**

    ```
      line:     123
      file:     02.md
      compiled: Jan 19 2038, 03:14:07
    ```

    </details> <!-- เพิ่มเติม -->

- **Compiler Messages — คำบ่นจาก Compiler**

    ถ้าเรา compile program แล้ว compiler บ่นอะไรออกมา เราควรทำความเข้าใจ  
    สิ่งที่มันบ่น ไม่งั้นเดี๋ยวมันงอน — ถ้ามันงอน เดี๋ยวไม่มีอะไร compile นาา

## Step A &#x1F92A; &#x1F4AD;

```c
#include <studio.h>                /* สะ ตู ดิ โอ                        */
          ^~~~~~~~

#include <stolib.h>                /* สะ​ โต ลิบ                         */
          ^~~~~~~~

...
```

```c
...

fget(hour_str, 3, stdin);          /* แจ้งด้วยว่าจะเอาอะไร char? string?  */
^~~~                               /* fgets() | fgetc() | fgetpos()    */

...
```

```c
...

printf("Enter minute: "):          /* ตรงนี้อะไรผิดน้าา                    */

get(minstr);                       /* แจ้งด้วยว่าจะเอาอะไร char? string   */
^~~                                /* หรือเอาจากไหน                     */

...
```

## Step B &#x1F4BB; &#x1F4AD;

Compile กัน

<details>
    <summary><b>0.1.0 — โจทย์ให้มา</b></summary>

```c
/*
 * 01.c
 *
 * 0.1.0  original
 */

#include <studio.h>
#include <stolib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: "):
    fget(hour_str, 3, stdin);

    printf("Enter minute: "):
    get(minstr);

    hour = atoi(hour_str);
    minute = atoi(minstr);

    printf("Time is %d:%d, hour, minute");
}
```

**Compile**

<details>
    <summary><b>GCC</b></summary>

<pre>
$ <kbd>gcc 01.c -o 01</kbd>
01.c:1:10: fatal error: studio.h: No such file or directory
1 | #include &lt;studio.h&gt;
    |        ^~~~~~~~~~
compilation terminated.
</pre>

----

**Compiler หาไฟล์ `studio.h` ไม่เจอ**

```
01.c:1:10: fatal error: studio.h: No such file or directory
\_______/  \______________________________________________/
  |          |
  |          error ระดับ fatal (รุนแรงฝุด ๆ):
  |          compiler หาไฟล์ `studio.h' ไม่เจอ
  ในไฟล์ 01.c
  บรรทัดที่ (line) 1
  หลักที่ (column) 10

fatal error: เป็น error ที่ทำให้ program หยุดทำงาน (terminate)
```

**อาจเป็นเพราะ**

- สะกดชื่อไฟล์ผิด
- ไม่ได้สะกดชื่อไฟล์ `studio.h` ผิด แต่ compiler หาไฟล์นั้นไม่เจอ

    <details>
        <summary>เพิ่มเติม</summary>

    กรณีนี้เราจะต้องบอก compiler ว่าไฟล์นี้อยู่ที่ไหน ซึ่งทำได้หลายวิธี

    - `export` [Environment Variable](https://en.wikipedia.org/wiki/Environment_variable) (ดู compiler ที่ใช้ด้วย)
    
        อย่าง

        - `CPATH`
        - `C_INCLUDE_PATH`

        เช่น

        ```bash
        export C_INCLUDE_PATH=path/to/include/dir/
        ```

        ลอง `man gcc` หรือถ้า Clang ลอง `man clang` ดู  
        พิมพ์ `?environment` แล้ว enter เพื่อ search หาจาก pattern ดู  
        (น่าจะอยู่ท้าย ๆ แบบ ท่าย ท้าย เลยแหละ — ถ้าจะเลื่อนเอง ของ GCC คือมือหงิก)

        GCC

        ```
        ...

        ENVIRONMENT
            This section describes several environment variables ...
        
        ...

            CPATH
            C_INCLUDE_PATH
            CPLUS_INCLUDE_PATH
            OBJC_INCLUDE_PATH
                ...
        
        ...
        ```

        Clang

        ```
        ...

        ENVIRONMENT
            TMPDIR, TEMP, TMP
                    These environment variables are checked...

            CPATH  If this environment variable is present...
        
        ...
        ```

        ไม่ก็อปมาให้ดูเต็ม ๆ เพราะอยากให้ลองใช้ manpage — นะจ๊ะ  
        > **&#x1F4A1; Hint**
        >
        > `b'\xe0\xb9\x83\xe0\xb8\x99\xe0\xb9\x80\xe0\xb8\x99\xe0\xb9\x87\xe0\xb8\x95\xe0\xb8\x81\xe0\xb9\x87\xe0\xb8\xa1\xe0\xb8\xb5 manpage \xe0\xb9\x83\xe0\xb8\xab\xe0\xb9\x89\xe0\xb8\x94\xe0\xb8\xb9'`

    - ใช้ compiler flag

        ```bash
        gcc -Ipath/to/include/dir/ 01.c -o 01
        ```

        เราสามารถ export environment variable `CFLAGS` ไว้ แล้วใช้ [`make`](https://www.gnu.org/software/make/) ได้  
        (ลอง `make --help` --> ถ้า `command not found` ก็แปลว่าอาจจะไม่ได้ลงไว้ – ไปลงซะ!)

        เช่น

        ```bash
        $ export CFLAGS="-Ipath/to/include/dir/"
        $ make 01
        cc -Ipath/to/include/dir/    01.c   -o 01
        ```

        สังเกตว่าจะมีการเติม flag ให้ด้วย

        ```
        cc -Ipath/to/include/dir/    01.c   -o 01
           \____________________/
        ```

        > **&#x1F4A1; Hint**
        >
        >  `man make`

    </details> <!-- เพิ่มเติม -->

ในกรณีคือการสะกดผิด (สังเกตจาก function ที่ใช้)

- `printf()` มีอยู่ใน `stdio.h`
- `atoi()` มีอยู่ใน `stdlib.h`

และถ้าถามว่ารู้ได้ยังไงว่าแต่ละ function อยู่ใน header file อันไหน?  
ลอง `man 3 printf` กับ `man 3 atoi` ดูสิ

<details>
    <summary><code>$ man 3 printf</code></summary>

<pre>
PRINTF(3)             Library Functions Manual            PRINTF(3)

<b>NAME</b>
     <b>printf, fprintf, sprintf, snprintf, asprintf, dprintf, vprintf, vfprintf, vsprintf, vsnprintf, vasprintf, vdprintf</b> – formatted output conversion

<b>LIBRARY</b>
     Standard C Library (libc, -lc)

<b>SYNOPSIS</b>
     <span class="theC">#include &lt;stdio.h&gt;</span>

     int
     <b>printf</b>(const char * restrict format, ...);

...
</pre>

</details> <!-- $ man 3 printf -->

<details>
    <summary><code>$ man 3 atoi</code></summary>

<pre>
ATOI(3)              Library Functions Manual            ATOI(3)

<b>NAME</b>
     <b>atoi, atoi_l</b> – convert ASCII string to integer

<b>LIBRARY</b>
     Standard C Library (libc, -lc)

<b>SYNOPSIS</b>
     <span class="theC">#include &lt;stdlib.h&gt;</span>

     int
     <b>atoi</b>(const char *str);

...
</pre>

</details> <!-- $ man 3 atoi -->

---

**แก้ชื่อ header files**

```c
/*
 * 01.c
 *
 * 0.1.0  original
 * ~ 0.1.1  fix (typo): header files
 */

#include <stdio.h>
#include <stdlib.h>

...
```

</details> <!-- GCC -->

<details>
    <summary>Clang (Preview)</summary>

<pre>
$ <kbd>clang 01.c -o 01</kbd>
01.c:7:10: fatal error: 'studio.h' file not found
#include &lt;studio.h&gt;
         ^~~~~~~~~~
1 error generated.
</pre>

</details> <!-- Clang (Preview) -->

<details>
    <summary>MSVC (Preview)</summary>

<pre>
> <kbd>cl 01.c</kbd>
Microsoft (R) C/C++ Optimizing Compiler Version 19.31.31106.2 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

01.c
01.c(7): fatal error C1083: Cannot open include file: 'studio.h': No such file or directory
> 
</pre>

</details> <!-- MSVC (Preview) -->
</details> <!-- 0.1.0 — โจทย์ให้มา -->

<details>
    <summary><b>0.1.1 — fix (typo): header files</b></summary>

```c
/*
 * 01.c
 *
 * 0.1.0  original
 * 0.1.1  fix (typo): header files
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: "):
    fget(hour_str, 3, stdin);

    printf("Enter minute: "):
    get(minstr);

    hour = atoi(hour_str);
    minute = atoi(minstr);

    printf("Time is %d:%d, hour, minute");
}
```

**Compile**

<details>
    <summary><b>GCC</b></summary>

<pre>
$ <kbd>gcc 01.c -o 01</kbd>

01.c: In function 'main':
01.c:16:27: error: expected ';' before ':' token
   16 |     printf("Enter hour: "):
      |                           ^
      |                           ;
01.c:19:29: error: expected ';' before ':' token
   19 |     printf("Enter minute: "):
      |                             ^
      |                             ;
01.c:23:5: error: 'minute' undeclared (first use in this function)
   23 |     minute = atoi(minstr);
      |     ^~~~~~
01.c:23:5: note: each undeclared identifier is reported only once for each function it appears in
01.c:23:19: error: 'minstr' undeclared (first use in this function); did you mean 'min_str'?
   23 |     minute = atoi(minstr);
      |                   ^~~~~~
      |                   min_str
</pre>

----

```
01.c: In function 'main':
\__/  \________________/
 |      |
 |      ใน `main()'
 ในไฟล์ 01.c
```

<details>
    <summary>Inspect</summary>

01.c

```
----------------------------------------------------------------------
   8    #include <stdio.h>
   9    #include <stdlib.h>
   10
-> 11   void main()
   12   {
   13       char hour_str[3], min_str[3];
   14       int hour, min;
----------------------------------------------------------------------
```

</details>

```
01.c:16:27: error: expected ';' before ':' token
01.c:19:29: error: expected ';' before ':' token
            \__________________________________/
              |
              error:
              ควรจะมี ';' ก่อน token ':'

token: ส่วนที่เล็กที่สุดของโปรแกรม
       แต่มีความหมายกับ compiler เกินจะพรรณนา
':' operator: 
```

<details>
    <summary>Inspect</summary>

01.c

```
----------------------------------------------------------------------
   15
-> 16   printf("Enter hour: "):
   17
   18   fget(hour_str, 3, stdin);
-> 19   printf("Enter minute: "):
   20   get(minstr);
   21
----------------------------------------------------------------------
```

</details>

```
01.c:23:5: error: 'minute' undeclared (first use in this function)
           \_____________________________________________________/
             |
             error:
             ไม่มีการ define indentifier 'minute'
             ('minute' เหนี่ยมันถูกใช้ครั้งแรกใน function นี้ — `main()')
```

<details>
    <summary>Inspect</summary>

01.c

```
----------------------------------------------------------------------
   20   get(minstr);
   21
   22   hour = atoi(hour_str);
-> 23   minute = atoi(minstr);
   24
   25   printf("Time is %d:%d, hour, minute");
   26}
----------------------------------------------------------------------
```

</details>

```
01.c:23:5: note: each undeclared identifier is reported only once for each function it appears in
           \____________________________________________________________________________________/
             |
             คุณโปรแกรมเมอร์โปรดทราบ:
             compiler จะมาบ่นเกี่ยวกับ indentifier ที่ไม่มีการ declare, indentifier ละ 1 ครั้งต่อ 1 function ที่มันอยู่
```

> &#x1FAF5; Try
> 
> ลอง compiler แล้วสังเกตผลลัพธ์
> 
> ```
> $ cat Y1-02/01418113/tests/02/01/ident-report.c
> $ gcc Y1-02/01418113/tests/02/01/ident-report.c
> ```

```
01.c:23:19: error: 'minstr' undeclared (first use in this function); did you mean 'min_str'?
            \______________________________________________________________________________/
              |
              error:
              ไม่มีการ define identifier 'minstr'
              ('minstr' เหนี่ยมันถูกใช้ครั้งแรกใน function นี้ — ``main()'');
              หมายถึง 'min_str' อะป่าว?
```

<details>
    <summary>Inspect</summary>

01.c

```
----------------------------------------------------------------------
   20   get(minstr);
   21
   22   hour = atoi(hour_str);
-> 23   minute = atoi(minstr);
   24
   25   printf("Time is %d:%d, hour, minute");
   26}
----------------------------------------------------------------------
```

</details>

----

**พิมพ์ผิดก็พิมพ์ใหม่**

```c
/*
 * 01.c
 *
 * 0.1.0  original
 * 0.1.1  fix (typo): header files
 * ~ 0.1.2  fix (typo): tokens
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

/*  printf("Enter hour: "):                                            */
    printf("Enter hour: ");

/*  fget(hour_str, 3, stdin);                                          */
    fgets(hour_str, 3, stdin);

/*  printf("Enter minute: "):                                          */
    printf("Enter minute: ");

/*  get(minstr);                                                       */
    gets(min_str);

    hour = atoi(hour_str);

/*  minute = atoi(minstr);                                             */
    min = atoi(min_str);

/*  printf("Time is %d:%d, hour, minute");                             */
    printf("Time is %d:%d", hour, min);
}
```

</details> <!-- GCC -->

<details>
    <summary>Clang (Preview)</summary>

<pre>
$ <kbd>clang 01.c -o 01</kbd>
01.c:11:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
void main()
^
01.c:11:1: note: change return type to 'int'
void main()
^~~~
int
01.c:16:27: error: expected ';' after expression
    printf("Enter hour: "):
                          ^
                          ;
01.c:17:5: error: implicit declaration of function 'fget' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
    fget(hour_str, 3, stdin);
    ^
01.c:19:29: error: expected ';' after expression
    printf("Enter minute: "):
                            ^
                            ;
01.c:20:5: error: implicit declaration of function 'get' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
    get(minstr);
    ^
01.c:20:9: error: use of undeclared identifier 'minstr'; did you mean 'min_str'?
    get(minstr);
        ^~~~~~
        min_str
01.c:13:23: note: 'min_str' declared here
    char hour_str[3], min_str[3];
                      ^
01.c:23:5: error: use of undeclared identifier 'minute'
    minute = atoi(minstr);
    ^
01.c:23:19: error: use of undeclared identifier 'minstr'; did you mean 'min_str'?
    minute = atoi(minstr);
                  ^~~~~~
                  min_str
01.c:13:23: note: 'min_str' declared here
    char hour_str[3], min_str[3];
                      ^
01.c:25:22: warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
    printf("Time is %d:%d, hour, minute");
                    ~^
2 warnings and 7 errors generated.
</pre>

</details> <!-- Clang (Preview) -->

<details>
    <summary>MSVC (Preview)</summary>

<pre>
> <kbd>cl 01.c</kbd>
Microsoft (R) C/C++ Optimizing Compiler Version 19.31.31106.2 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

01.c
01.c(16): error C2143: syntax error: missing ';' before ':'
01.c(19): error C2143: syntax error: missing ';' before ':'
01.c(23): error C2065: 'minute': undeclared identifier
01.c(23): error C2065: 'minstr': undeclared identifier
01.c(23): warning C4047: 'function': 'const char *' differs in levels of indirection from 'int'
01.c(23): warning C4024: 'atoi': different types for formal and actual parameter 1
01.c(25): warning C4473: 'printf' : not enough arguments passed for format string
01.c(25): note: placeholders and their parameters expect 2 variadic arguments, but 0 were provided
01.c(25): note: the missing variadic argument 1 is required by format string '%d'
> 
</pre>

</details> <!-- MSVC (Preview) -->
</details> <!-- 0.1.1 — fix (typo): header files -->

<details>
    <summary><b>0.1.2 — fix (typo): tokens</b></summary>

```c
/*
 * 01.c
 *
 * 0.1.0  original
 * 0.1.1  fix (typo): header files
 * 0.1.2  fix (typo): tokens
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 3, stdin);

    printf("Enter minute: ");
    gets(min_str);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %d:%d", hour, min);
}
```

<details>
    <summary>Machine A — GCC, Clang</summary>

**Compile**

<pre>
$ <kbd>gcc 01.c -o 01</kbd>
01.c: In function ‘main’:
01.c:21:5: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
   21 |     gets(min_str);
      |     ^~~~
      |     fgets
/usr/bin/ld: /tmp/ccXxXxXx.o: in function `main':
01.c:(.text+0x4b): warning: the `gets' function is dangerous and should not be used.
$ 
</pre>

**Execute**

<pre>
$ <kbd>./01</kbd>
Enter hour: <kbd>3</kbd>
Enter minute: <kbd>14</kbd>
Time is 3:14$
</pre>

<details>
    <summary>Clang (Preview)</summary>

<pre>
$ <kbd>clang 01.c -o 01</kbd>
01.c:12:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
void main()
^
01.c:12:1: note: change return type to 'int'
void main()
^~~~
int
01.c:21:5: warning: implicit declaration of function 'gets' is invalid in C99 [-Wimplicit-function-declaration]
    gets(min_str);
    ^
2 warnings generated.
/usr/bin/ld: /tmp/01-ffffff.o: in function `main':
01.c:(.text+0x47): warning: the `gets' function is dangerous and should not be used.
$ <kbd>./01</kbd>
Enter hour: <kbd>3</kbd>
Enter minute: <kbd>14</kbd>
Time is 3:14$ 
</pre>

</details> <!-- Clang (Preview) -->
</details> <!-- Machine A -->

<details>
    <summary>Machine B — GCC, Clang</summary>

**Compile**

<pre>
$ <kbd>gcc 01.c -o 01</kbd>
$
</pre>

**Execute**

<pre>
$ <kbd>./01</kbd>
Enter hour: <kbd>3</kbd>
warning: this program uses gets(), which is unsafe.
Enter minute: <kbd>14</kbd>
Time is 3:14$
</pre>

<details>
    <summary>Clang (Preview)</summary>

<pre>
$ <kbd>clang 01.c -o 01</kbd>
01.c:12:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
void main()
^
01.c:12:1: note: change return type to 'int'
void main()
^~~~
int
1 warning generated.
$ <kbd>./01</kbd>
Enter hour: <kbd>3</kbd>
warning: this program uses gets(), which is unsafe.
Enter minute: <kbd>14</kbd>
Time is 3:14$ 
</pre>

</details> <!-- Clang (Preview) -->
</details> <!-- Machine B -->

<details>
    <summary>Machine C — MSVC</summary>

**Compile**

<pre>
> <kbd>cl 01.c</kbd>
Microsoft (R) C/C++ Optimizing Compiler Version 19.31.31106.2 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

01.c
Microsoft (R) Incremental Linker Version 14.31.31106.2
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:01.exe
01.obj
> 
</pre>

**Execute**

<pre>
> <kbd>.\01.exe</kbd>
Enter hour: <kbd>3</kbd>
Enter minute: <kbd>14</kbd>
Time is 3:14
> 
</pre>

</details> <!-- Machine C — MSVC -->
</details> <!-- 0.1.2 — fix (typo): tokens -->

<br />

## <span class="theC">02</span> โปรโมชั่นสะสมสติกเกอร์

ห้างสรรพสินค้าแห่งหนึ่งจัดโปรโมชั่นแจกสติกเกอร์ให้ลูกค้าสะสมเพื่อใช้เป็นส่วนลดได้  
โดยจำนวนสติกเกอร์ที่สะสมได้จะให้ส่วนลดที่แตกต่างกันไป ตามตารางต่อไปนี้

- สะสมครบ 1 ดวง	รับส่วนลด 10%
- สะสมครบ 2 ดวง	รับส่วนลด 15%
- สะสมครบ 3 ดวง	รับส่วนลด 20%
- สะสมครบ 6 ดวง	รับส่วนลด 30%
- สะสมครบ 9 ดวง	รับส่วนลด 40%

พิจารณากรณีที่ลูกค้ามีสติกเกอร์ 5 ดวง ลูกค้าจะได้รับส่วนลดเพียง 20% เท่านั้น  
เนื่องจากสติกเกอร์ไม่เพียงพอที่จะได้ลด 30%

จงเขียนโปรแกรมเพื่อรับจำนวนสติกเกอร์ที่ลูกค้าสะสมได้ (บรรทัดแรก)  
และราคาสินค้าที่ลูกค้าต้องการซื้อ (บรรทัดที่สอง)  
แล้วคำนวณส่วนลดที่ลูกค้าได้รับ (บรรทัดที่สาม)  
จำนวนเงินหลังหักส่วนลดที่ลูกค้าต้องชำระ (บรรทัดที่สี่)  
และจำนวนสติกเกอร์คงเหลือ (บรรทัดที่ห้า)

### ตัวอย่าง Input/Output 1

<pre>
<kbd>5</kbd>
<kbd>1000.00</kbd>
You get 20 percents discount.
Total amount due is 800.00 Baht.
And you have 2 stickers left.
</pre>

### ตัวอย่าง Input/Output 2

<pre>
<kbd>0</kbd>
<kbd>1000.00</kbd>
You get 0 percents discount.
Total amount due is 1000.00 Baht.
And you have 0 stickers left.
</pre>

### ตัวอย่าง Input/Output 3

<pre>
<kbd>20</kbd>
<kbd>1000.00</kbd>
You get 40 percents discount.
Total amount due is 600.00 Baht.
And you have 11 stickers left.
</pre>

## Source

<div class="highlight">
<pre>
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

<textarea rows="19" cols="72">
</textarea>
</pre>
</div>

## ;D

- Control Flows

<!-- footer ################################################################ -->

[^1]: Plaform ที่ใช้สาธิต

    - [Linux distribution](https://en.wikipedia.org/wiki/Linux_distribution) ที่ใช้สาธิต: [Ubuntu](https://ubuntu.com/) (Debian) และ [Fedora](https://getfedora.org/) (RHEL)
    - macOS Moterey
    - Windows 10

[^2]: Compiler ที่ใช้สาธิต

    - [GCC](https://gcc.gnu.org/)
    - [Clang](https://clang.llvm.org/)
    - [MSVC](https://docs.microsoft.com/en-us/cpp/build/reference/compiling-a-c-cpp-program)