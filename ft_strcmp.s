section .text
global ft_strcmp

ft_strcmp:
    push    rbp
    mov     rbp, rsp
    mov     rcx, 0
loop:
    cmp rsi, rdi
    jne end
    inc rsi
end:
    mov [rax], al
    ret