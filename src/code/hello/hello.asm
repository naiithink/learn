;---------------------------------------------------------------------------------
; Hello, Windows! in x86 ASM - (c) naiithink - Use at your own risk, no warranty!
;---------------------------------------------------------------------------------

; Compiler directives and includes

.386                                                    ; Full 80386 instruction set and mode
.model flat, stdcall                                    ; All 32-bit and later apps are flat. Used to include "tiny, etc"
option casemap:none                                     ; Preserve the case of system identifiers but not our own, more or less

; Include files - headers and libs that we need for calling the system dlls like user32, gdi32, kernel32, etc

include \masm32\include\windows.inc                     ; Main windows header file (akin to Windows.h in C)
include \masm32\include\user32.inc                      ; Windows, controls, etc
include \masm32\include\kernel32.inc                    ; Hanldes, modules, paths, etc
include \masm32\include\gdi32.inc                       ; Drawing into a device context (ie: painting)
