### Problem 

Four glasses on a square table puzzle, also known as the blind bartender’s problem

Four glasses are placed on the corners of a square table. Some of the glasses are upright (up) and some upside-down (down). You have to arrange the glasses so that they are all up or all down (while keeping your eyes closed all the time). The glasses may be re-arranged in turns subject to the following rules.

    Any two glasses may be inspected in one turn and after feeling their orientation you may reverse the orientation of either, neither or both glasses.
    After each turn table is rotated through a random angle.
    At any point of time if all four glasses are of the same orientation a ring will bell

You have to come up with a solution to ensure that all glasses have the same orientation (either up or down) in a finite number of turns. The algorithm must be non-stochastic i.e. it must not depend on luck.


### Solution 

1. On the first turn choose a diagonally opposite pair of glasses and turn both glasses up.

2. On the second turn choose two adjacent glasses. At least one will be up as a result of the previous step. If the other is down, turn it up as well. If the bell does not ring then there are now three glasses up and one down(3U and 1D).

3. On the third turn choose a diagonally opposite pair of glasses. If one is down, turn it up and the bell will ring. If both are up, turn one down. There are now two glasses down, and they must be adjacent.

4. On the fourth turn choose two adjacent glasses and reverse both. If both were in the same orientation then the bell will ring. Otherwise there are now two glasses down and they must be diagonally opposite.

5. On the fifth turn choose a diagonally opposite pair of glasses and reverse both. The bell will ring for sure.


### Link to references

> http://en.wikipedia.org/wiki/Four_glasses_puzzle
> http://www.ms.uky.edu/~jrge/Papers/BBP.pdf

