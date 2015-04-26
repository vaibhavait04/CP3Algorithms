### Problem 

Same 12 balls with one odd ball problem, but your solution must be non-adaptive. IOW, specify the weighings that you will make up front. You are not allowed to change them based on the results of previous weighings

So the whole problem becomes: Identify the odd (heavy or light) ball among 12 identical balls with a static plan (i.e. no conditional decisions) that uses at most 3 weighings of a balance scale.

The original puzzle is hard enough, but this variant has been killing me. I think I could come up with a solution if the original problem specified whether we expect the odd ball to be heavy or light.

Anyone have any ideas? It feels nearly impossible.

### Solution 


Divide the balls in 3 sets of 4 balls each: A, B, C

*First Weighing: A1, A2, A3, A4 vs B1, B2, B3, B4

*Second Weighing: A1, A2, B1, B2 vs A3, C1, C2, C3

*Third Weighing: A1, B1, B3, C1 vs A2, B2, B4, C2

Explanation: We can consider case wise: *Case 1: all weighing are equal or First two weightings are equal: C4 as it was never taken for weightings, and all other are defect-less.

    Note: We are just supposed to figure out the odd ball, it is not necessary to tell if it is heavy or light.

*Case2: First Weighting is equal; second is unequal:

    Note: Without loss of generality we can assume, left was Heavy. Solution for other case would just be vice verca. as first weighting was equal: As and Bs are defect-less. left pan was heavy in second weighting so, either of C1, C2 and C3 is Light. In the third weighting we have C1 and C2 opposite to each other, whichever pan is lighter, that ball is odd and light. If the pans are equal the C3 is odd and light.

Case 3: First weighting is unequal; Again without loss of generality assume that Left was heavier. One of balls As can be heavier or one of the balls in B can be lighter. Case 3.1 in second weighting left is Heavier. That can be only because of balls A1 or A2. So, one of them is odd. In the third weighting they are in opposite pans, so whichever pan is heavier that ball is odd and heavy.

*Case 3.2: In second weighting right is heavier: That can either be because one of the balls B1 or B2 is ligher or ball A3 is heavier In the third weighting we dont have ball A3 and balls B1 and B2 are in opposite pans. So, whichever pan is ligher that ball is odd. If the pans are equal that means A3 is odd and heavier.

*Case 3.3 In second weighting pans are equal. That means none of the A1, A2, A3 or B1, B2 are defective. In the third weighting we have B3 and B4 in opposite pans, whichever pan is lighter that ball is defective. If the pans are equal, then A4 is odd and heavier.

This covers all the cases. Hope you enjoy the solution. :)

### Solution 2 - incorrect/ incomplete 

number balls 1-12. weigh 1-4 vs 5-8. then, weigh 5-8 vs 9-12. final weighing is 3-5 vs 8-10. the first two weighings will tell you which group has the ball. if weigh 1 tilts and 2 doesn't, its 1-4. if weigh 2 tilts and 1 doesn't, its 9-12. if both tilt, its 5-8. the third weigh cuts each group in half so that if the scale tilts, you know that it is one of the two from the group already causing the scale to tilt. if it doesn't, then you know that it's one of the two that you left out from the group.


