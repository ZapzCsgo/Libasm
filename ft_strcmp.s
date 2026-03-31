section .text
global ft_strcmp

ft_strcmp:
loop:
    mov al, [rsi]
    mov cl, [rdi]
    cmp al, cl
    jg inferior
    jl superior
    cmp al, 0
    je equal
    inc rsi
    inc rdi
    jmp loop
superior:
    sub cl, al
    movsx rax, cl 
    ret
inferior:
    sub cl, al
    movsx rax, cl
    ret
equal:
    mov rax, 0
    ret