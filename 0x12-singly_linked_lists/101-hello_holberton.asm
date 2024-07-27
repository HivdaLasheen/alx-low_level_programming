section .data
    hello_msg db 'Hello, Holberton', 0    ; The message to print
    fmt db '%s', 10, 0                    ; The format string for printf ("%s\n")

section .text
    global _start

_start:
    ; Call printf
    ; Prepare the arguments for printf
    mov rdi, fmt                          ; First argument: format string
    mov rsi, hello_msg                    ; Second argument: message string
    xor eax, eax                          ; Clear the eax register (number of SSE registers used, 0 for printf)

    ; Call printf (printf is located via the PLT)
    call printf

    ; Exit the program
    ; Prepare the arguments for exit
    mov rdi, 0                            ; Exit code 0
    call exit                             ; Call exit
