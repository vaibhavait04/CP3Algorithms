### 2 Egg Puzzle

This is another 2 egg puzzle same as like 2 egg puzzle asked by google. Here the number of storey is different instead of 100 storey it is 36. The puzzle is given as 
Suppose that we wish to know which windows in a 36-story building are safe to drop eggs from, and which will cause the eggs to break on landing. We make a few assumptions:
    An egg that survives a fall can be used again.
    A broken egg must be discarded.
    The effect of a fall is the same for all eggs.
    If an egg breaks when dropped, then it would break if dropped from a higher window.
    If an egg survives a fall then it would survive a shorter fall.

It is not ruled out that the first-floor windows break eggs, nor is it ruled out that the 36th-floor windows do not cause an egg to break.
If only one egg is available and we wish to be sure of obtaining the right result, the experiment can be carried out in only one way. Drop the egg from the first-floor window; if it survives, drop it from the second floor window. Continue upward until it breaks. In the worst case, this method may require 36 droppings. Suppose 2 eggs are available. What is the least number of egg-droppings that is guaranteed to work in all cases?

### Solution :

The number of drop required is 8.

First i have to start dropping the egg on 8th floor, if not breaks, then 15th floor, if not breaks 21st floor...
the series goes like this...
	8,15,21,26,30,33,35,36...
i.e (8), (8+7), (8+7+6), (8+7+6+5), ....(8+7+6+5+4+3+2+1)

so in general, the minimum value of N such that,
	n(n+1)/2 >=36

so n= 8.

let us assume it breaks in 20th floor...
put down from 8 th floor - will NOT be broken
put down from 15th floor - will NOT be broken
put down from 21st floor - it will be broken.
then u have one egg remaining.

start putting from 16th floor.. ie.. 16, 17,18,19, 20
19th floor it will not be broken and
at 20th floor it will be broken.
even for the worst case scenario the maximum number of droppings required is 8.
so the answer is 8!

Famous 2-egg puzzle from an OR/MS perspective and explore the structure of the optimal policies for this puzzle. It is shown that the puzzle provides a vivid environment for teaching/learning basic concepts related to decision making under uncertainty, including the differences and similarities between the Worst Case and Expected Value scenarios. 
The more general problem where N test eggs -rather than 2- are provided is also examined.
 
In that paper the proposed solution for 2 egg with N storey buildings they also solved the problem for N egg for N story building in appendix. All the solution are math oriented. Click here to download the paper as pdf.
  

