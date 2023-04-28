section .data
	msg db "Hello, Holberton", 0Ah

section .text
	global main

	extern printf

main:
	mov rdi, msg
	xor eax, eax
	call printf
	ret
