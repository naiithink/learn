<link rel="stylesheet" href="style.css">

<mark>&nbsp;LAB01&nbsp;</mark>

# Introduction to C Programming

[**Back to TOC**](/contents.md)

## Jump to...

- [Command Line Interface](#command-line-interface)
- [GNU Compiler Collection](#gnu-compiler-collection-\(GCC\))
- [Visual Studio Code](#visual-studio-code)
- [The C Programming Language](#the-c-programming-language)

## Command Line Interface

**Command Line** คือ สิ่งที่ไว้ใช้สั่งงานคอมพิวเตอร์ผ่านทางการสั่งคำสั่ง ทีละบรรทัด

## GNU Compiler Collection (GCC)

**GCC** คือ สิ่งที่ใช้สร้างไฟล์ binary หรือ machine code จาก source code และ library ต่าง ๆ – compilation

## Visual Studio Code

**Visual Studio Code** หรือ **vscode** คือ text editor ที่แนะนำเพื่อใช้ในการเรียนวิชานี้

## The C Programming Language

### Program Structure

```c
#include <stdio.h>          // Header file ที่ใช้ในโปรแกรมนี้

int main()                  // ประกาศฟังก์ชัน `main' และกำหนด return type
{
    /* Instructions */      // Instruction สำหรับฟังก์ชัน `main'

    return 0;               // `return' ค่าของฟังก์ชัน `main'
}
```

### Synopsis

**Include Header File(s)**

```
#include <header file ที่จะใช้ในโปรแกรมนี้>
```

**Declaration of `main`**

```
<return type> main
```

return type ของ `main` ควรจะเป็น `int`<br>
หาก return `0` หมายถึง โปรแกรมทำงานเสร็จสมบูรณ์<br>
หากเป็นค่าอื่น หมายถึงเกิดปัญหาในการทำงาน

**Instructions of `main`**

```
{
    [instructions]

    return [value];
}
```