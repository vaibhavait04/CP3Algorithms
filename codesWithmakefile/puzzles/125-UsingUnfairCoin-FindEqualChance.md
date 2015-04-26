### Problem 

Unfair Coin 

Say you have an unfair coin: a coin whose probability of flipping heads and flipping tails is unknown but nonzero.
Can you design a game where you and your opponent have an equal chance of winning?

### Solution 

Let's say this coin has a probability p of flipping heads. Then, it has a probability of (1-p) of flipping tails.

Each of you waits for the following sequences: 
	You: H, T Your Opponent: T, H 
You flip the coin twice - if either of you matches your sequence, then you win. If you don't, you flip the coin twice again.  
This works because both you and your opponent have a p*(1-p) chance of getting your combination on each pair of flips. 

Note that this process can continue indefinitely: if the coin flips T, T, T, T,... forever, the game will never end.

