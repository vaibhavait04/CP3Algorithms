### Problem 

No if() no abs() 

Given two variable a and b, construct a function f(a,b) which return the maximum one in {a,b}.  
You can only use +- · / and abs() (to take the absolute value). NO if() is allowed in your construction.  
Pure arithmetic ; )

### Solution 

{a+b+abs(a-b)}/2

Also, {a+b-abs(a-b)}/2 is the smaller one in {a,b}

Here's an intuitive explanation by @Grant Goodman (in comments): 
"(a+b)/2 gives you the average, which is directly in between a and b, and it is 1/2 the difference from either a or b.
So to get to the larger one, just add the difference of the two divided by two, giving you ( (a+b)/2 + abs(a-b)/2 ), or (a+b+abs(a-b))/2"



