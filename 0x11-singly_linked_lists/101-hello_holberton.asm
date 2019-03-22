section .data
	    msg db "Hello, Holberton", 0x0a ; 0x0a = \n
	    size equ $ - msg

	section .text
	    global main
main:
	        mov eax, 4 	; syscall write
	        mov ebx, 1	; standard out
	        mov ecx, msg	; address of string
	        mov edx, size  	; size to write
	        int 0x80       	; invoke kernel

	        mov eax, 0 	; syscall exit
	        int 0x80
