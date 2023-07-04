section .data
    format db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    ; Call printf
    mov edi, format
    xor eax, eax
    call printf
    
    ; Exit the program
    xor edi, edi
    xor eax, eax
    mov eax, 60
    syscall
