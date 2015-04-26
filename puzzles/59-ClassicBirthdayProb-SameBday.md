### Problem 

A classic problem.

How many people do you need to have in a room so that the probability of at least 2 of people sharing a birthday is greater than 50%.

Assume 365 days in a year (no leap years), and birthdays are random over these 365 days, and people born in different years on the same day obviously have the same birthday.

Also, no twins, twins are cheating.

### Solution 

Ans: 23

The solution is easier to understand if you realize that with 23 people in the room there are 23 * 22 / 2 = 253 possible pairings.

To find the probability, first find that probability that n number of people don’t share a birthday. The equation for this is

p(n) = 1 x (1 – 1/365) x (1 – 2/365) x …. x (1 – (n – 1)/365)

The probability that any 2 do share a birthday is then 1 – p(n). Doing the math we find that at 23 people the probability that at least 2 of them share the same birthday is 50.7%.


## ToDo: 

* Read about probability and combinatorics. 
* Read about Bayes theorem. 

