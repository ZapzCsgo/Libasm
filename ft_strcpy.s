section .text
global  ft_strcpy

ft_strcpy:
	mov rdx, rdi
loop:
	mov al, [rsi]
	cmp al, 0
	je end
	mov [rdi], al
	inc rsi 
	inc rdi
	jmp loop
end:
	mov byte [rdi], 0
	mov rax, rdx
	ret