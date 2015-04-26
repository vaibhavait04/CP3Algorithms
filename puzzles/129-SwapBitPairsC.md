### Problem 

Bit Pair swap 

In one line of C or Java, how would you swap every pair of bits in a byte? That is, swap bits 0 and 1, 2 and 3, 4 and 5, 6 and 7.

Example: 0110 1010 becomes 1001 0101.

### Solution 


x_after = (((x_before & 0x55) << 1) | ((x_before & 0xAA) >> 1))

((x_before & 0x55) << 1) takes bits {0,2,4,6} and shifts them left, while ((x_before & 0xAA) >> 1) takes bits {1,3,5,7} and shifts them right. Finally, the two resulting values are OR'd together.



