; A program to output "Hello, Holberton"

	global	main
	extern	printf
main:
	mov	edi, fmt
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
fmt: db "Hello, Holberton", 10, 0
