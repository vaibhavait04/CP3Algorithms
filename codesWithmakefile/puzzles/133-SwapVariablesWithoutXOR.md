### Problem 

Suppose you have two variables, a and b. How can you swap their values without using a temporary variable and also without using the bitwise operator XOR?

### Solution 

In a similar manner to the XOR solution, we can use simple addition and subtraction:

a = a + b;
b = a - b;
a = a - b;

