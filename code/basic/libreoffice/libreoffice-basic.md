# LibreOffice BASIC

<br>

## **เรื่องทั่วไป**

### **Comments**

----

\``'`\` (apostrophe) หรือ \``REM`\` (Remark) ตามด้วยข้อความ<br>

```
// foo
// eiei
```

`|`

```
REM foo
REM eiei
```

<br>

### **Indentation**

----

>   การย่อหน้าช่วยให้ดู script ได้ง่ายขึ้น<br>

ใช้ Space หรือ Tab (Tabulation) key ก็ได้

<br>

### **Continuing an Instruction on The Next Line**<br>

----

ใช้&nbsp;&nbsp;\`` _`\` (space + underscore)<br>

เช่น

```
foo = first + second + third + ...
```

`|`<br>

```
foo = first + second _
+ third + ...
```

`|`<br>

```
foo = first + second
    _ * third + ...
```

<br>

### **Variables**<br>

----

#### **Declaration**

สมมติ:<br>

```
int foo = 9;

// delclare a variable called "foo" as an integer and assign its value to "9"
```

จะเป็น:<br>

```
Dim foo As Integer
foo = 9
```

สมมติ:<br>

```
char* eiei = "Hello, World!";

// declare a variable called "foo" as a string and assign its value to "Hello, World!"
```

จะเป็น:<br>

```
Dim eiei As String
eiei = "Hello, World!"
```

<br>

### **Arrays**<br>

----

Lorem ipsum

<br>

### **Types**<br>

----

|Type Name|Description|Initialized to|
|:-|:-|:-|
|`Boolean`|Logical values `True` / `False`<br> can be seen as `False = 0` ; `True =` other integers (-1).|`False`|
|`Byte`|Integer numbers (8 bits), from [0, 255]|`0`|
|`Currency`|Currency numbers (4 decimals).|`0.0000`|
|`Date`|Dates and hours. In fact, doubles.<br>Reference date (`0.0`) is `12/30/1899` at `00:00`.|`0.0`|
|`Double`|Floating numbers (64 bits).|`0.0`|
|`Integer`|Interger numbers (16 bits), from `-32_768` to `+32_767`|`0`|
|`Long`|32 bits integer numbers, `-2_147_483_648` to `+2_147_483_647`|`0`|
|`Object`|Objects. Allow to manipulate LibreOffice API objects.|`Null`|
|`Single`|Floating numebrs (32 bits).|`0.0`|
|`String`|Text (0 to 65_545 characters).|`"" (null length)`|
|`Variant`|Any type, incl. object.|`Empty`|

<br>

### **Custom Types**<br>

----

Lorem ipsum

<br>

...

<br>

### **File Paths**<br>

----

Lorem ipsum

<br>

### **Subprograms**<br>

----

- Sub
- Function
- Parameters

>   Premature subprogram exit: `Exit Sub, Exit Function`

<br>

#### **Sub**

----

Execute an action.<br>


#### **Declaration**

```
Sub {SubName} `(` {parameters} `)`
```

#### **Structure**

```
Sub {SubName} `(` {parameters} `)`
    {instructions}
End Sub
```

#### **Use**

```
{SubName} `(` {arguments} `)`
```

ถ้าไม่มี argument:

```
{SubName} `()`
```

#### **Function**

----

#### **Declaration**

```
Function {FuncName} `(` {parameters} `)` as {SomeType}
```

#### **Structure**

```
Function {FuncName} `(` {parameters} `)` as {SomeType}
    {instructions}
    {// somewhere, define the return value:}
    {FuncName} `=` {SomeValue}
End Function
```

#### **Use**

```
{SomeVar} `=` {FuncName} `(` {arguments} `)`
```

ถ้าไม่มี argument:

```
{FuncName} `()`
```

<br>

### **Parameters**<br>

----

**Parameter:** a value the subprogram declaration specifies.<br>
**Argument:** the actual value the caller passes to the subprogram.

<br>

Ex:
```
MySub(ByRef SomeParam As Long, ByVal OtherParam As String, _
    Optional ByRef SomeParam As String)
```

|||
|:-|:-|
|`ByRef`|**ByRef** (default). The parameter **points to** the argument passed by the caller.<br>> Any modification of a `ByRef` item is propagated to the caller at return time.|
|`ByVal`|**ByValue** The parameter is a **copy** of the argument passed by the caller.<br>> Value modifications are local to the called and not propagated to the caller.|
|`Optional`|**Optional** parameter.<br>> Giving a default value to optional parameter:<br>`If IsMissing(SomeParam) Then SomeParam = SomeValue`<br>> The identifier is always available in the subprogram.|

<br>

### **Control Structures**<br>

----

- Loops
- Conditional Tests

<br>

#### **Loops**

----

Repeat a sequence if instructions.

>   Premature exit possible using \``Exit For`\` or \``Exit Do`\`

<br>

#### **For ... Next** &#8212; must know the counter bounds

For each counter value ...<br>

```
For i = Start To End [Step Increment]
    {instructions}
Next
```

By default, increment \``Step`\` is `1`.

>   **Never** set the counter in the loop instructions!

<br>

#### **For Each ... Next** &#8212; number of items is unknown

For each item ...<br>

```
For Each {item} In {SomeObject}
    {do something with item}
Next
```

<br>

#### **Do While ... Loop**

`Condition` is evaulate first.

```
Do While {condition}
    {instructions}
Loop
```

`|`

```
While {condition}
    {instructions}
Wend
```

>   Older syntax, for compatibility only.<br>
    Doesn't support \``Exit`\`

<br>

#### **Do Loop ... Until**

`Condition` is evaluate last.

```
Do
    {instructions}
Loop Until {condition}
```

<br>

#### **Conditional Tests**

----

A branch that allows to take action according to a given situation.

<br>

#### **If (alone)**

```
If {condition} Them {someInstruction}
```

<br>

#### **If Then Else**

```
If {condition} Then
    {instructionsThen}
Else
    {instructionsElse}
End If
```

<br>

#### **If Elself**

```
If {condition} Then
    {instructionsThen1}
ElseIf {otherCondition} Then
    {instructionsThen2}
Else
    {instructionsElse}
End If
```

<br>

#### **Select**

```
Select Case {someVariable}
    Case {value1} `,` {value2}
        {instructions for someValue}
    Case {value3} To {value4}
        {instructions for otherValue}
    Case Else
        {instructions for other situations}
End Select
```

<br>

----

<br>

[Calling a Command Associated with a LibreOffice Menu]()

[//]: <> (next: Command associated with a LibreOffice Menu)