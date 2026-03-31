extern  __errno_location
section .text
global  ft_read

ft_read:
    mov rax, 0
    syscall
    cmp rax, 0
    jl  wrong_input
    ret

wrong_input:
    push rbx
    neg rax
    mov rbx, rax
    call __errno_location
    mov dword [rax], ebx
    mov rax, -1
    pop rbx
    ret