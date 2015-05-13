### Problem 

Another bulb problem 

On a circle there are 2014 light bulbs, 2 are ON, and 2012 are OFF. You can choose any bulb and change the neighbor’s state from ON to OFF or from OFF to ON. Doing so, can we get all 2014 light bulbs on ? If yes, How?

### Solution 

Lets represent 1->On, 0->Off. As the question says 2 bulbs are on & 2012 are off.
Consider the following list rep. as a cycle. For eg. in the list "X Y Z . . . A", A immeditaely follows X.

1, 0, 0, 0, 0, . . . 0, 1, where # of zeros = 2012.

The one point answer is, if "<number of 0's b/w extreme two ones> % 4 == 0" , then we can make all 2014 bulbs ON. some of the Possible inputs can be.

List of "1, <1000 zeros> ,1, <1012 zeros>
List of "1, <2012 zeros>, 1"

why <number of 0's b/w extreme two ones> % 4 ==0, solves this ?
Ans:

case1 : # of 0s=4
1 0 0 0 0 1->
select 2nd '0' from left, and turn its adjacent 1st, 3rd zeros to 1.
1 1 0 1 0 1
select 3rd '1' from left, and turn its adjacent zeros to 1.
1 1 1 1 1 1.

similarly we can switch all off bulbs b/w already 2 switched on bulbs, if they are multiples of 4.



