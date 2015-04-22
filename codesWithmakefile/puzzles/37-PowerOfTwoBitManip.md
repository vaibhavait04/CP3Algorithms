### Problem 

Given any number n, using one line of C (using no external libraries or functions) code, determine if n is a power of 2. Return 1 if n is a power of 2 and 0 if not.

### Solution 

Power of 2 - Example 1(2^0) 10 (2^1), 100(2^2), 1000(2^3), 10000 (2^4), etc. 
2^n -1 = 01111..n-1 times
2^n & (2^n -1) = 01111.. & 1000.. = 0 

bool is_power_of_2 = (!(n & (n-1)) && n);

Using the bitwise & operator, only n’s that are powers of two will satisfy the relationship n & (n-1) = 0. 
This, however incorrectly returns 0 as a power of 2. n must be strictly positive for this to work. 
To fix this we use !(n & (n-1)) && n.


