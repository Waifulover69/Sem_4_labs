	AREA RESET, DATA, READONLY
	EXPORT __Vectors
__Vectors 
	DCD 0x10001000 ; stack pointer value when stack is empty
	DCD Reset_Handler ; reset vector
	ALIGN
	AREA mycode, CODE, READONLY
	ENTRY
	EXPORT Reset_Handler
Reset_Handler
	LDR R0, =NUM
	LDR R1, =RESULT
	LDRB R1,[R0],#1
	AND R2,R1,#0XF0
	LSR R2,#04
	ADD R2,#0X30
	STRB R2,[R3],#1
	AND R4,R1,#0X0F
	ADD R4,#0X30
	STRB R4,[R3],#1
STOP
	B STOP
NUM DCD 0X12
	AREA data,DATA,READWRITE
RESULT DCB 0
	END 