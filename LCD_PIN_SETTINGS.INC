;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;THE LCD USES THE RB2 TO RB7 PINS TO FUNCTION.                        ;
;THE RB0 AND RB1 PINS ARE FREE TO BE USED WITH ANY APPLICATION.       ;
;THE LCD RUN IN 4 BIT MODE WITH RB7 TO RB4 PINS USED US DATA BUS.     ;
;THE RB2 PIN IS USED FOR REGISTER SELECT COMMAND AND RB3 FOR ENABLE.  ;
;RB7 -> D7 | RB6 -> D6 | RB5 -> D5 | RB4 -> D4 | RB3 -> E | RB2 -> RS ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

LCD_PORT EQU PORTB
LCD_TRIS EQU TRISB
LCD_RS EQU 0x02
LCD_E EQU 0x03