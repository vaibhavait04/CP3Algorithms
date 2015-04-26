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

