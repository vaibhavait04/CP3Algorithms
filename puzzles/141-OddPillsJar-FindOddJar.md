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

