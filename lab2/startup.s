#
#	startup.s
#
#  Created on: Feb 12, 2022
#      Author: mahmoud abed
.globl reset
	
	
	
reset:
		ldr sp, =stack_top
		bl main
		bl .