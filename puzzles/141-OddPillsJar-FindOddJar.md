### Problem 

Odd Pills: 

Your pharmacist gives you 5 jars filled with pills. The pills contained in each jar have an identical appearance and size (i.e. if you mixed all of the pills you wouldn't be able to tell them apart).

4 of the 5 jars hold pills that weigh 10 grams each, and the remaining jar holds pills that weigh 9 grams each. However, you don't know which jar is the one holding the lightweight pills. Keep in mind that all of the pills in all jars are identical in appearance and size.

You are given a weighing scale that can only be used once. Using this scale (only once), how do you determine which jar is holding the 9 gram pills?

Note: assume the jars are quite large and that you have an unlimited quantity of pills from each jar.

### Solution 


Take a different number of pills from each jar and compare the expected mass with the observed mass. For example, take:

    1 pill from jar 1
    2 pills from jar 2
    3 pills from jar 3
    4 pills from jar 4
    5 pills from jar 5

Expected mass (if all pills were 10 grams each) = (1+2+3+4+5) * 10 = 150 grams.

Suppose jar 4 contained the 9 gram pills. The total mass that you observe would be (1+2+3+5) * 10 + 4*9 = 146 grams. Since the mass you observe is 4 grams less than the expected 150 grams, you know jar 4 is holding the 9 gram pills.

In general (using the distribution of pills from above):

Jar # = | Expected mass (150g) - observed mass |


### Problem version 2: Coin machine 
Coin Puzzle :
This is another coin puzzle.  As per the puzzle you have 20 coin machines, each of which produce the same kind of coin. you know how much a coin is supposed to weigh. one of the machines is defective, in that every coin it produces weighs 1 ounce less than it is supposed to. you also have an electronic weighing machine. how can you determine which of the 20 machines is defective with only one weighing? (by one use, we mean you put a bunch of stuff on the machine and read a number, and that's it -- you not allowed to accumulate weight onto the machine and watch the numbers ascend, because that's just like multiple weighings). you are allowed to crank out as many coins from each machine as you like.

This puzzle is like another coins puzzle (Box of Defective balls...) But It's solution is somewhat different. In other coins puzzle you can weigh number of times. But here it is only once. Try to think differently and post your answers..  

### Answer
In case of normal coin puzzle they ask number if times required to use the balance to find the answer. Here it is different. Here you can use only one time the balance.

The solution is to take the coins in the following order. Take one coin from the first machine, two coins from the second machine, three coin from the third mechine etc.. So that totally you can take

(20 * (20+1) )/2 = 210 coins. 

Lets consider each coins have 10 ounce weight except one machine coins. So totally you have 2100 ounce weight for 210 coins. If you weigh it now you can get less weight because one machine produces less weight. From the weight you can find the machine which produces less weight coins. Suppose the resultant weight is 2099 then the first machine is fault. If it is 2098 then second machine is fault. That is the fault machine number = 2100 - Obtained weight from balance.


