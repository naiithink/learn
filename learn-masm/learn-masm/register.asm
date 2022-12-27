.386
.MODEL flat, stdcall

ExitProcess PROTO, uExitCode: BYTE

.code
_start PROC
	mov eax,1
	mov ebx,2
	mov ecx,3
	mov edx,4

	INVOKE ExitProcess,0
_start ENDP
END
