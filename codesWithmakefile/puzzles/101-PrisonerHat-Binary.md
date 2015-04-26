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

