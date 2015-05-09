### Problem

Gold Bar Puzzle You’ve got someone working for you for seven days and a gold bar to pay him. The gold bar is segmented into seven connected pieces. You must give them a piece of gold at the end of every day. What and where are the fewest number of cuts to the bar of gold that will allow you to pay him 1/7th each day?

### Solution

Lets split the chain as,
	A (1/7) B (1/7 + 1/7) C (1/7 + 1/7 + 1/7 + 1/7) 

Day 1: Give A (+1)
Day 2: Get back A, give B (-1, +2)
Day 3: Give A (+1)
Day 4: Get back A and B, give C (-2,-1,+4)
Day 5: Give A (+1)
Day 6: Get back A, give B  (-1,+2)
Day 7: Give A (+1)

Note: In a way this problem is similar to min weights used to weigh. 2, 2^n as solution. 

### Problem Version 2 
The Gold Chain - Puzzle

  A woman wants to buy a painting at an auction where you bid grams of gold instead of money.  She owns a gold chain made of 23 interlocking loops, each weighing 1 gram.  She wants to go to a jeweler before the auction to cut the minimum number of loops that would allow her to pay any sum from 1 to 23.  For example, she could pay a 13 gram price with a 12 link chain and a single link.  After much thought, she figures out a way to do it by cutting just 2 of the loops in the chain.  How many loops are in the pieces of chains that she has after the 2 cuts?

### Answer 

Make a cut in 4th and loops of the Gold chain so you can get pieces of 1,1,3,6 and 12. from this you can weights from 1 to 23 grams.



***
1/7, 2/7 and 4/7. For convenience sake, I would just refer to the bars as 1, 2 and 4.  
At the end of Day 1: Give Bar 1 (You- 2 and 4, Worker- 1) 
At the end of Day 2: Give Bar 2, Take back Bar 1 (You- 1 and 4, Worker- 2) 
At the end of Day 3: Give Bar 1 (You- 4, Worker- 1 and 2) 
At the end of Day 4: Give Bar 4, Take back Bar 1 and Bar 2 (You- 1 and 2, Worker- 4) 
At the end of Day 5: Give Bar 1 (You- 2, Worker- 1 and 4) 
At the end of Day 6: Give Bar 2, Take back Bar 1 (You- 1, Worker- 2 and 4) 
At the end of Day 7: Give Bar 1 (You- Empty, Worker- 1, 2 and 4)


