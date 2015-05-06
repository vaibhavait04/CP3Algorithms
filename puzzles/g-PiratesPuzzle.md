### Problem 

There are 5 pirates in a ship. Pirates have hierarchy C1, C2, C3, C4 and C5.C1 designation is the highest and C5 is the lowest. 
These pirates have three characteristics : 
a. Every pirate is so greedy that he can even take lives to make more money.  
b. Every pirate desperately wants to stay alive. 
c. They are all very intelligent.

There are total 100 gold coins on the ship. The person with the highest designation on the deck is expected to make the distribution. If the majority on the deck does not agree to the distribution proposed, the highest designation pirate will be thrown out of the ship (or simply killed). Only the person with the highest designation can be killed at any moment. What is the right distribution of the coins proposed by the captain so that he is not killed and does make maximum amount?

Maximum time to solve the puzzle : 15 Minutes

Difficulty level of the puzzle : High

What is the interviewer looking for : Your approach and solution structure.

### Solution 

The  solution of this problem lies in thinking through what will happen if all the pirates were thrown one by one and then thinking in reverse order.
Let us name pirates as A,B,C,D and E in hierarchy (A being highest).

If only D and E are left at end, D will simply give 0 coins to E and still escape because majority cannot be reached. Hence, even if E gets 1 coin he will give his vote to the distributor.

If C, D and E are there on the deck, C will simply give one coin to E to get his vote. And D  simply gets nothing. Hence, even if D gets 1 coin he will give his vote to the distributor.

If B,C,D and E are there on the deck, B will simply give one coin to D to get his vote. C & E simply gets nothing.

If A,B,C,D and E are there on the deck, A simply gives 1 coin each to C and E to get their votes.

Hence, in the final solution A gets 98 coins and only C & E get 1 coin each.


