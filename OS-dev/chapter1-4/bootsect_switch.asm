[org 0x7c00]

    mov bp, 0x9000
    mov sp, bp

    mov bx, MSG_REAL_MODE
    call print_string

    call switch_to_pm

    jmp $   

    %include "my_print_function.asm"
    %include "print_string_pm.asm"
    %include "gdt.asm"
    %include "switch_to_pm.asm"

[bits 32]

BEGIN_PM:
    mov ebx, MSG_PROT_MODE
    call print_string_pm

    jmp $


MSG_REAL_MODE: db "Started in 16-bit real mode", 0
MSG_PROT_MODE: db "Successfuly landed in 32-bit protected mode", 0

times 510 -($-$$) db 0
dw 0xaa55