section .data
    msg db "Hello Assembly",10  ;reserving bytes for the string
                                ;appending 10 (ascii for \n)
section .text
    global _start

_start:
    mov rax, 1      ;adding the OPCODE for output to rax
    mov rdi, 1      ;adding "stdin" flag to the output command
    mov rsi, msg    ;adding the string from .data section
    mov rdx, 15     ;declaring the size of msg
    syscall

    mov rax, 60     ;OPCODE for exit
    mov rdi, 0      ;program return value
    syscall 