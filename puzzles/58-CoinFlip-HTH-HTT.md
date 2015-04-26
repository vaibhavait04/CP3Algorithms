### Problem 

Coin flip 

On Monday, you flip a coin all day. You start flipping it until you see the pattern Head, Tail, Head. 
You record the number of flips required to reach this pattern, and start flipping again (and counting up from 1 again) until you see that pattern again, you record the second number, and start again. 
At the end of the day you average all of the numbers you’ve recorded. On Tuesday you do the EXACT same thing except you flip until you see the pattern Head, Tail, Tail.

Will Monday’s number be higher than Tuesday’s, equal to Tuesday’s, or lower than Tuesday’s?

### Solution 

Higher 

Tuesday’s pattern will require, on average, fewer flips to be achieved. The two patterns differ only in their final required elements (Heads on Monday and Tails on Tuesday). 
So let’s look at success and failure AFTER successfully flipping the first two elements (HT). 

> When you flip HTH on Monday, you stop counting. 
> But suppose you fail and flip HTT on Monday, you would have to wait until you see the next H to start hoping for the pattern again. On Tuesday, however, if you flip HTT, you stop counting. 
> But if you flip HTH, you have failed to achieve your goal of HTT, but you are one-third of the way to achieving it again (because you got the last H which can be used as the first element of the pattern).

On average, HTH will occur in about 10 flips and HTT will occur in about 8 flips.

HOW ?? 
using a simple Monte Carlo simulation implemented in PARI/GP with the following lines. (Note in PARI/GP each command prompt starts with "?" and each echoed result starts with "%[ans #]":

? nx=1; ny=1; totalx=0; totaly=0;
? x=[2,2,2];
? y=[2,2,2];
? xcounter=0; ycounter=0;
? for(a=1,1000000,x[1]=x[2]; x[2]=x[3]; x[3]=random(2); y[1]=y[2]; y[2]=y[3]; y[3]=random(2); \
	if(x==[0,1,0],totalx=totalx+nx; xcounter=xcounter+1; nx=1; x=[2,2,2], nx=nx+1); 
	if(y==[0,1,1],totaly=totaly+ny; ycounter=ycounter+1; ny=1; y=[2,2,2], ny=ny+1);
  )

? totalx/xcounter*1.
%9 = 9.9747538727020637786400406970364976609
? totaly/ycounter*1.
%10 = 8.0048669591111395728602990618295923922


Gray codes 
----------
000
001
011
010
---
110
111
101
100
---
000




