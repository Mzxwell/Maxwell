	.file	"decimal_converter.c"
	.intel_syntax noprefix
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "0b%d\12\0"
	.text
	.globl	decToBin
	.def	decToBin;	.scl	2;	.type	32;	.endef
decToBin:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 32
	mov	DWORD PTR 16[rbp], ecx
	mov	eax, DWORD PTR 16[rbp]
	mov	edx, eax
	lea	rax, .LC0[rip]
	mov	rcx, rax
	call	printf
	nop
	leave
	ret
	.section .rdata,"dr"
.LC1:
	.ascii "0o%o\12\0"
	.text
	.globl	decToOct
	.def	decToOct;	.scl	2;	.type	32;	.endef
decToOct:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 32
	mov	DWORD PTR 16[rbp], ecx
	mov	eax, DWORD PTR 16[rbp]
	mov	edx, eax
	lea	rax, .LC1[rip]
	mov	rcx, rax
	call	printf
	nop
	leave
	ret
	.section .rdata,"dr"
.LC2:
	.ascii "0x%x\12\0"
	.text
	.globl	decToHex
	.def	decToHex;	.scl	2;	.type	32;	.endef
decToHex:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 32
	mov	DWORD PTR 16[rbp], ecx
	mov	eax, DWORD PTR 16[rbp]
	mov	edx, eax
	lea	rax, .LC2[rip]
	mov	rcx, rax
	call	printf
	nop
	leave
	ret
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC3:
	.ascii "%d %c\0"
.LC4:
	.ascii "Error\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
main:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 48
	call	__main
.L12:
	lea	rdx, -5[rbp]
	lea	rax, -4[rbp]
	mov	r8, rdx
	mov	rdx, rax
	lea	rax, .LC3[rip]
	mov	rcx, rax
	call	scanf
	movzx	eax, BYTE PTR -5[rbp]
	cmp	al, 98
	je	.L5
	movzx	eax, BYTE PTR -5[rbp]
	cmp	al, 111
	je	.L5
	movzx	eax, BYTE PTR -5[rbp]
	cmp	al, 104
	je	.L5
	lea	rax, .LC4[rip]
	mov	rcx, rax
	call	puts
	jmp	.L6
.L5:
	mov	eax, DWORD PTR -4[rbp]
	cmp	eax, 113
	je	.L15
	movzx	eax, BYTE PTR -5[rbp]
	movsx	eax, al
	cmp	eax, 111
	je	.L9
	cmp	eax, 111
	jg	.L12
	cmp	eax, 98
	je	.L10
	cmp	eax, 104
	je	.L11
	jmp	.L6
.L10:
	mov	eax, DWORD PTR -4[rbp]
	mov	ecx, eax
	call	decToBin
	jmp	.L6
.L9:
	mov	eax, DWORD PTR -4[rbp]
	mov	ecx, eax
	call	decToOct
	jmp	.L6
.L11:
	mov	eax, DWORD PTR -4[rbp]
	mov	ecx, eax
	call	decToHex
	nop
.L6:
	jmp	.L12
.L15:
	nop
	mov	eax, 0
	leave
	ret
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders) 12.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
