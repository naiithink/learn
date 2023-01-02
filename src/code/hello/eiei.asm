title naiithink
subtitle eiei

extrn ExitProcess: PROC
extrn MessageBoxA: PROC

includelib      kernel32.lib
includelib      user32.lib

.data
caption db '64-bit hello!',0
message db 'Hello World!',0

.code
start PROC
;     mov     rax,1
;     mov     rbx,1
;     add     rax,rbx
;     lea     rdx,message
;     mov     r9d,0
;     call    MessageBoxA
;     mov     ecx,eax
;     call    ExitProcess

    sub     rsp,28h
    mov     rcx,0
    lea     rdx,message
    lea     r8,caption
    mov     r9d,0
    call    MessageBoxA
    mov     ecx,eax
    call    ExitProcess
start ENDP
END
