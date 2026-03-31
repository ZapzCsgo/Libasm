section .text
    global ft_strdup
    extern malloc

ft_strdup:
    push rdi
    mov rcx, 0
    jmp len_loop
len_loop:
    cmp byte [rdi], 0
    je alloc
    inc rdi
    inc rcx
    jmp len_loop
alloc:
    mov rdi, rcx
    inc rdi
    call malloc
    mov rdx, rax
    pop rdi
loop:
    mov bl, byte [rdi]
    cmp bl, 0
    je end
    mov byte [rax], bl
    inc rdi
    inc rax
    jmp loop
end:
    mov byte [rax], 0
    mov rax, rdx
    ret
