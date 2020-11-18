	.file	"main.c"
	.intel_syntax noprefix
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "a[%d] = %d\12\0"
.LC1:
	.ascii "%d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp
	.seh_pushreg	rbp
	sub	rsp, 448
	.seh_stackalloc	448
	lea	rbp, 128[rsp]
	.seh_setframe	rbp, 128
	.seh_endprologue
	call	__main
	jmp	.L2
.L3:
	mov	eax, DWORD PTR -84[rbp]
	cdqe
	mov	edx, DWORD PTR -80[rbp+rax*4]
	mov	eax, DWORD PTR -84[rbp]
	mov	r8d, edx
	mov	edx, eax
	lea	rcx, .LC0[rip]
	call	printf
.L2:
	lea	rax, -84[rbp]
	mov	rdx, rax
	lea	rcx, .LC1[rip]
	call	scanf
	cmp	eax, 1
	je	.L3
	mov	eax, 0
	add	rsp, 448
	pop	rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
