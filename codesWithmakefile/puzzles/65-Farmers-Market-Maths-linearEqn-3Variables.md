### Problem 

You’re a farmer. You’re going to a market to buy some animals. On the market there are 3 types of animals for sale. You can buy:

Horses for £10 each, goats for £1 each and ducks, you get 8 of these per bunch and each bunch costs £1.

The aim is to acquire 100 animals at the cost of £100, what is the combination of horses, goats and duck that allows you to do this? (you must buy at least one of each.)

### Solution 

This is problem can be solved relatively by using a Brute Force technique, that is to say trying lots of combinations. There are some things you can do to speed up your working….

We can have a maximum of 10 horses or we would have no money left.

We can have a maximum of 12 bunches of ducks or we would have too many animals.

A spread sheet might help 

However there is a more eloquent approach (thanks to Gary Short): This can be solved as a simultaneous equation, with three variables and two equation…

Our equations are:

10*H + G + D/8 = 100 (pounds) 
H + G + D = 100 (animals)

Subtracting equation II from equation I gives:

9H – 7D/8 = 0 OR…. 9H = 7D/8

(at this point we can actually stop solving the equation as we know that ducks come in bunches of 8 so the feature D/8 in the equation actually represents the number of bunches of duck, therefore the equation is simply 9H = 7DB which easily gives us a solution. But we will continue….)

72H = 7D

Directly this equation is unsolvable as there are an infinite number of solutions. However, we have the restraint that both variables must be integers and that there H<100 & D<100.

Hence the only solutions is

H = 7 : D = 72 : G = 21


