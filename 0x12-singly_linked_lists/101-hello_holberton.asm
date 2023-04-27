; A program to output "Hello, Holberton"

	global	main	; Make main available to the linker
	extern	printf	; Available in another library
main:
	mov	edi, fmt
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
fmt: db "Hello, Holberton", 10, 0
