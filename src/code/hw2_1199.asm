title Potsawat Thinkanwatthana
subtitle Grand Assembly

.data
RATE    dw      1200            ; Rate for each
FRIEND  db      5               ; Number of friends
NET     dw      ?               ; Net
PAY     dw      ?               ; For each, round to 0

.code
start   PROC
    mov     rax,RATE            ; rax = RATE
    mov     rbx,FRIEND          ; rbx = FRIEND
    mul     rbx                 ; rax *= rbx
    mov     NET,rax             ; NET = rax
    mov     edx,0               ; divident destination
    div     FRIEND              ; rdx = rax // FRIEND
    mov     PAY,rdx             ; PAY = rdx
    int     21h
start   ENDP
