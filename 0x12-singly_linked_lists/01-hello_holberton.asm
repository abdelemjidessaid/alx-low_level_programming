section .data
    message db "Hello, Holberton", 0xA

section .text
    global _start

_start:
    ; Write the message to stdout
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 16
    syscall

    ; Exit with status code 0
    mov rax, 60
    xor rdi, rdi
    syscall

