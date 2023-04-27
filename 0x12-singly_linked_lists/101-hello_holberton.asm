	global	main
	extern	printf
main:
	mov	rax, 1
	mov	rdi, 1
	mov	rsi, fmt
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
fmt:	db	"Hello, Holberton", 10, 0
