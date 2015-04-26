### Problem 

Prisoners and Hats 

100 prisoners are standing in a line each 1 seeing the back of the ones in front of him. Each prisoner is given a black or a white hat. If they can guess the color of their hat they can go away freely, but if they say anything else than black or white or do anything else then everyone stays in prison. From the last one to the first each prisoner is asked 1 by 1 their hat color. The question is what tactic should they use so that the most people get out with certainty and whats the maximum number of people that can get out of prison(this number can be checked).

### Solution 

Say they agree on that they code white hat as 0 and black hat as 1.
The last person adds up the colors and says white if the sum is even and black if its odd. 
The 99th person can do this with the first 98 and from what the 100th said he can deduct what color he is since if the sum of the first 99 has the same parity as the what the last one said the hat of the 99th must be white, otherwise black. 
This can be continued up to the first person. Since the last person can’t be saved with certainty 99 is the maximum.

Set White (1/ odd) and Black (0/ even) 

Example 1: 

Hat: 1111
Pos: 1234 
4 -> 3 -> odd -> White 
3 -> 2 -> even + previous odd -> white  --> person will think previous said odd (total 3) + he can see even (total 2) -> he must be the third one #4 told. 
2 -> 1 -> odd + previous even -> white 
1 -> 0 -> even + previous odd -> white 

Example 2: 

Hat: 11111
Pos: 12345
5 -> 4 -> even -> black 
4 -> 3 -> odd + previous even -> white 
3 -> 2 -> even + previous odd -> white 


The person at the back, lets call him person number 1, will agree that if he sees an odd number of red hats he calls out red, if he sees an even number of red hats he calls out blue. (Obviously any similar scheme would work, but we will use this one.) 
Unfortunately this means he has a 50% chance of survival but it guarantees everyone else's.

### 151. Problem - similar 

There are 100 prisoners in jail. Their guards decide to play a game with them. Here's what happens:

1) The prisoners are lined up in a single file, front to back, such that the prisoner at the back of the line can see the 99 prisoners ahead of him, the prisoner immediately ahead of him can see the 98 prisoners in front of him and so on.

2) A randomly selected hat is placed on each prisoner's head. The hat may be black or white.

3) Starting from the back of the line (i.e. starting from the prisoner that can see 99 prisoners in front of him), a guard asks each prisoner what the colour of their hat is. If the prisoner answers correctly, he lives, otherwise, he is killed.

The prisoners are given these rules and then given 15 minutes to strategize before the game begins. What is the strategy that maximizes the expected value of the number of them that survive?

FAQ:
* Can the prisoners take off their hats and look at them? No.
* Do we know in advance how many of each colour hat there is? No.
* Can the prisoners communicate with the other prisoners in any way apart from responding to the guard's question after the strategizing time is over? No.
* Is an expected value of 75 survivors the best that can be achieved? Nope :)

### Solution 

Parity bit - logic behind the solution. 

Here's the strategy that gives an expected value of 99.5 survivors:

    The prisoner at the back counts the number of white hats. If he sees an even number of white hats, he says "white" when asked by the guard, if he sees an odd number of white hats, he says "black" when asked by the guard.

    The next prisoner to be asked (the one that can see 98 prisoners in front of him) can count the number of white hats ahead of him and, based on what the first prisoner said, determine whether he is wearing a white or black hat. Specifically, suppose the first prisoner answered "black", indicating that there is an odd number of white hats. Then, if the second prisoner's count is also odd, he must be wearing a black hat. If the second prisoner's count is even, he must be wearing a white hat.

    Based on the previous responses, keeping track of whether they should expect an odd or even number of white hats in front of them, every prisoner can determine whether they are wearing a black or white hat.

    Since the first prisoner is the only one who's response is up to chance, he has a 50/50 chance of survival. Everyone else has a 100% chance of survival, so we expect 99.5 of them to survive.

This is related to the concept of a parity bit used for error detection in computers.



