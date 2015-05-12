### Problem 

The Sinking island 

You and 3 friends are on an island that is sinking. There is one bridge from the island to the mainland that supports at most 2 people at once. However, it's dark outside so anyone crossing the bridge must use a flashlight otherwise they'll fall off the bridge. Between the 4 of you, there is only one flashlight.

Let's name each of you Friend A, B, C, and D. Each of you travel at different speeds. It takes the following times for each of you to cross the bridge:

    Friend A: 1 minute
    Friend B: 2 minutes
    Friend C: 5 minutes
    Friend D: 10 minutes

When two friends cross the bridge, their rate is limited by the slower person. For example, if Friend C and D are crossing at the same time, it will take 10 minutes.

Friends can go back and fourth on the bridge. For example, Friend B and C can cross (in 5 minutes), and Friend B can go back across the bridge to give the flashlight to Friends A and D (in another 2 minutes).

Given the 2 person maximum on the bridge and the requirement to travel with a flashlight, what is the fastest time in which all 4 friends can safely cross the bridge to the mainland?

Hint: the solution doesn't involve throwing the flashlight, hanging off the bridge, shining the flashlight from the mainland to the island, etc.


### Solution 

Use dynamic programming to write an algorithm. 

Detailed steps: 

The key to solving this problem is realizing that after a given trip across the bridge with two friends, the person going back across the gym doesn't need to be one of those two friends. For example, if Friend C and D cross, but Friend A is already on the other side of the bridge, Friend A can be the one to take the flashlight back across the bridge.

In summary:

1,2     2 min. - Friend A & B cross (island --> mainland)
1       1 min. - Friend A crosses back (island <-- mainland)
5,10    10 min. - Friend C & D cross (island --> mainland)
2       2 min. - Friend B crosses back (island <-- mainland)
1,2     2 min. - Friend A & B cross (island --> mainland)

Total: 17 minutes


### Problem - another version 

Bridge 

Four people are on this side of the bridge. The bridge will be destroyed by a bomb in 17 minutes. Everyone has to get across before that. Problem is that it’s dark and so you can’t cross the bridge without a flashlight and they only have one flashlight. Plus the bridge is only big enough for two people to cross at once. The four people walk at different speeds: one fella is so fast it only takes him 1 minute to cross the bridge, another 2 minutes, a third 5 minutes, the last it takes 10 minutes to cross the bridge. When two people cross the bridge together (sharing the flashlight), they both walk at the slower person’s pace. Can they all get across before the bridge blows up? if yes, then how ?

### Solution 

Person A : 1 minute
Person B : 2 minutes
Person C : 5 minutes
Person D : 10 minutes
Let F represents Flashlight.
Person C and D are the slowest guys, if they don’t walk together that it self will make it 15 minutes, In this case (the best way to save time is) :

A,D,F —-Bridge—-> = 10 min
<—-Bridge—-A,F = 1 min (returning with flash light) A,C,F —-Bridge—-> = 5 min
<—-Bridge—-A,F = 1 min A,B,F —-Bridge—-> = 2 min

That makes a total of 19 minutes, but thats not what we want.
It means they both should walk together, in this case if they both are walking together, then there should be another person(because if one of them will bring it will take 5 minutes) to bring the flashlight back. So here is the solution…A,B,F —-Bridge—-> = 2 min
<—-Bridge—-A,F = 1 min C,D,F —-Bridge—-> = 10 min
<—-Bridge—-B,F = 2 min A,B,F —-Bridge—-> = 2 min

Total time = 17 minutes.
if you exchange the 2nd and 4th steps, that will be another solution.



