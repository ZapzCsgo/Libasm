section .text
global  ft_strlen

ft_strlen:
    mov rcx, 0
loop:
    mov al, [rdi]
    cmp al, 0
    je end
    inc rcx
    inc rdi
    jmp loop
end:
    mov rax, rcx
    ret