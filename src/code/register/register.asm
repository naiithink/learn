section .text
    global _start

_start:
    MOV EAX,1
    MOV EBX,2
    MOV ECX,3
    MOV EDX,4

                        ; return 0;
    MOV EAX,1           ; sys_exit
    MOV EBX,0           ; argument
    INT 80H             ; interupt

    ; MOV EAX,1           ; sys_write
