section .data
    hello_msg db "Hello, Holberton", 0xA, 0x00  ; Message to be printed, followed by newline and null terminator
    format_specifier db "%s", 0x00  ; Format specifier for printf

section .text
    extern printf  ; External reference to the printf function from C library
    global _start  ; Entry point for the program

_start:
    mov edi, format_specifier  ; Load the format specifier
    mov rsi, hello_msg  ; Load the address of the message into rsi (second argument for printf)
    xor eax, eax  ; Clear eax register for vararg function calling convention
    call printf         ; Call the printf function

    ; Exit the program
    mov eax, 60  ; Syscall number for exit
    xor edi, edi  ; Return 0 status
    syscall      ; Invoke the syscall to exit

