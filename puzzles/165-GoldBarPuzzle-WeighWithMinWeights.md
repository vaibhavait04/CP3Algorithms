### Problem

Gold Bar Puzzle 

You’ve got someone working for you for seven days and a gold bar to pay him. The gold bar is segmented into seven connected pieces. You must give them a piece of gold at the end of every day. What and where are the fewest number of cuts to the bar of gold that will allow you to pay him 1/7th each day?

### Solution

Lets split the chain as,
	A (1/7) B (1/7 + 1/7) C (1/7 + 1/7 + 1/7 + 1/7) 

Day 1: Give A (+1)
Day 2: Get back A, give B (-1, +2)
Day 3: Give A (+1)
Day 4:Get back A and B, give C (-2,-1,+4)
Day 5:Give A (+1)
Day 6:Get back A, give B  (-1,+2)
Day 7:Give A (+1)


Note: In a way this problem is similar to min weights used to weigh. 2, 2^n as solution. 

