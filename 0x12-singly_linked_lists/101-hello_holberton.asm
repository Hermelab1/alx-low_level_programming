section .data
    msg: db 'Hello, Holberton', 0x0A

section .text
    global _start

_start:
    ; Print the message
    mov  eax, 4
    mov  ebx, 1
    mov  ecx, msg
    mov  edx, 15
    int  0x80

    ; Exit cleanly
    mov  eax, 1
    mov  ebx, 0
    int  0x80
