;
; Ullrich von Bassewitz, 0.08.1998
; JBit port by Emanuele Fornara
;
; void gotoy (unsigned char y);
;

	.export		_gotoy

	.include	"io2.inc"

_gotoy:	sta	CONCY		; Set the new position
	rts

