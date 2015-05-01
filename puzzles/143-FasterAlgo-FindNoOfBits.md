### Problem 

Write a function that counts the number of bits in an integer that are set to 1 that is linear in time complexity in the worst case, but sub-linear on average.

### Solution 

while (x) count++, x = x & (x-1);

There are a few solutions, the most obvious being an algorithm that counts each bit using bit-masks, but those are linear even if the integer only has a single bit set (e.g. 0010 0000).

A better solution with time complexity proportional to the number of bits set to 1 is:

int countBits(int x) {
    int count = 0;
    while(x != 0) {
        count++;
        x = x & (x-1);
    }
    return count;
}

This works because each time you set x = x & (x-1), you unset the least-significant high bit and leave the remaining high order bits set. 

This is apparent with a short example: say we have the number x = 10100. Subtracting 1 from that gives: 10011. ANDing the two of these and assigning gives: x = 10100 & 10011 = 10000. So we've successfully gotten rid of the least significant high bit.

In the loop, we are essentially counting how many times we can do this "get rid of the least significant high bit" without the number hitting zero.

Of course, the big-O time complexity of this solution is still linear in the number of bits in the worst case (consider having an integer of all 1's).


