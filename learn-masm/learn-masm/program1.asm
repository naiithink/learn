.386
.model flat,stdcall

.stack 4096
ExitProcess proto,dwExitCode:dword

.data
	RATE	DD	1200
	FRIEND	DD	5
	NET		DD	?
	PAY		DD  ?

.code
;	ASSUME CS:CODE, DS:DATA
START PROC
	mov		eax, RATE
	mov		ebx, FRIEND
	mul		ebx					; MUL var -> eax = eax * var;
	mov		NET, eax
	
	mov		edx, 0				; Remainder
	mov		ecx, FRIEND
	sub		ecx, 1
	div		ecx					; DIV var -> eax = eax // var;
								;            && edx = eax % var;
	mov		PAY, eax
	int		21h
	invoke	ExitProcess, 0
START ENDP
END START
