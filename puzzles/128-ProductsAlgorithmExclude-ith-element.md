### Problem 

Given an array A[1...N] of integers, create an array O[1...N] where O[i] = the product of all elements in A except for the ith element.

For example, if N = 3, and A = {6, 4, 2}, O = {8, 12, 24}

The tricky part: don't use divide and do it in O(N).

### Solution 

The best solution I could come up with was to develop O in two passes, one forward, one backward:

1) Take a pass through A and store the "product so far" into O. So, the ith element of O, then, has the product A[1]xA[2]x...xA[i-1].

2) Take a backwards pass through A and multiply the values in O by the "product so far" from the right. So, the ith element of O gets multiplied by the elements that come after it.

In both passes, the "product so far" is a single variable accumulating the product of the elements seen thus far in A.

The result is that O[i] will be the product of all the numbers before it and all the numbers after it.



