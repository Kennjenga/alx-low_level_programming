0x14. C - Bit manipulation
Assume if B = 60; and B = 13; Now in binary format they will be as follows:

A = 0011 1100

B = 0000 1101

---

A&B = 0000 1000

A|B = 0011 1101

A^B = 0011 0001

~A = 1100 0011

Bitwise operators including:
1)& - Binary AND Operator copies a bit to the result if it exists in both
operands.
Ex:
(A & B) will give 12 which is 0000 1100 2) | - Binary OR Operator copies a bit if it exists in eather operand.
Ex:
(A | B) will give 61 which is 0011 1101
3)^ - Binary XOR Operator copies the bit if it is set in one operand but not both.
Ex:
(A ^ B) will give 49 which is 0011 0001
4)~ - Binary Ones Complement Operator is unary and has the efect of 'flipping' bits.
Ex:
(~A ) will give -60 which is 1100 0011 5) << - Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.
Ex:
A << 2 will give 240 which is 1111 0000 6) >> - Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand
Ex:
A >> 2 will give 15 which is 0000 1111
