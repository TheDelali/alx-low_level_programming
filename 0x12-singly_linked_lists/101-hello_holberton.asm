section .data
	msg db "Hello, Holberton", 0Ah ; msg to print with newline char

section .text
	global main

	extern printf ; declare printf function

main:
	mov rdi, msg ; move msg address to first arg register
	xor eax, eax ; clear eax register for success
	call printf ; call printf function
	ret ; return from main
