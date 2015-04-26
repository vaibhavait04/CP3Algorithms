### Problem 

It's said that a number N with 4 digits is a double-square number when it equals the sum of the squares of two numbers: one formed by the first two digits of N, in the order they appear in N and the other formed by the two last digits of N in the order they appear in N.

For example, 1233 is a double-square number since 1233 = 12^2 + 33^2. Find another double-square number.

### Solution 

Placing the problem into an equation:

x^2 + y^2 = 100x + y, this is one equation for two variables. It's looks unsolvable, and this is precisely the hard part of the problem, because we naturally tend to forget that we already have one solution to this equation which is 1233. If you replace x = 12 you'll end up with:

y^2 - y - 1056 = 0, this case leads nowhere since delta < 0. But if you replace y = 33, then you'll have:

x^2 - 100x + 1056 = 0, this case gives you the problem's suggested solution 1233 and another one since delta > 0, which is 88 composing the answer 8833.


