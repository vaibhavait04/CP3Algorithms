### Prob 67: 8 Marbles puzzle 

You have 8 lead marbles, one of which is heavier than the rest. What is the minimum amount of “weightings” (i.e. with a see-saw scale) you need to do to guarantee finding the odd one out?

### Solution 

Ans: 2 

1) 8 marbles → 3 3 2 2) Weigh 3 vs 3. If they are equal, weigh the remaining two. 3) If they are not equal, take the heavier one, weight two of the balls. If they are equal, the third one is the odd ball, if not, the heavier side is the odd ball.

### Prob2: 9 balls / 12 balls find the odd 'one' out 

Prob 73: Marble Weights 

You are given a set of scales and 12 marbles. The scales are of the old balance variety. That is, a small dish hangs from each end of a rod that is balanced in the middle. The device enables you to conclude either that the contents of the dishes weigh the same or that the dish that falls lower has heavier contents than the other. The 12 marbles appear to be identical. In fact, 11 of them are identical, and one is of a different weight. Your task is to identify the unusual marble and discard it. You are allowed to use the scales three times if you wish, but no more.

Note that the unusual marble may be heavier or lighter than the others. You are asked to both identify it and determine whether it is heavy or light.

### Solution try 
Divide 12 as: 
  2 piles of 6, or 
  3 piles of 4, or 
  4 piles of 3, or
  6 piles of 2

1. Divide equally as 4a, 4b, 4c
2. Weight 4a, 4b 
  a) 4a == 4b 
    a) 4c -> 1a, 1b, 1c, 1d , 4a -> 1.4a
    b) Compare 1a, 1b and 1c, 1.4a
       a) 1a,1b == 1c, 1.4a ==> 1d is odd 
       b) 1a,1b != 1c, 1.4a ==> continue (note heavy and light) 
          a) Compare 1a, 1b 
              a) 1a == 1b --> 1c is odd 
              b) 1a != 1b --> odd is light 
    c) 
  b) 4a != 4b 

*** 

### Problem 3 - 12 balls

You have 12 identical balls. One of them is slightly different in weight than the rest. You have three weighs of a balance scale to determine which ball is different and whether it is heavier or lighter.

This is not easy… try hard to figure this out before looking at the answer.

### Solution 

• 1st weigh: Balls 1-4 vs. Balls 5-8 o There are 3 possible outcomes:

• They Balance. In the case that balls 1-4 balance with balls 5-8, we know the odd ball is in balls 9-12. So we weigh (2nd) balls 9,10, and 11 against three neutral balls (1,2, and 3) • If 9-11 balances with 1-3, the odd ball is number 12 in which case we weigh (3rd) it against another neutral ball to determine whether it is light or heavy • If 9-11 is heavier than 1-3 we weigh (3rd) ball 9 against 10. o If they balance: it is heavy ball 11 o If they do not: the heavier ball is the odd ball

• 1-4 is heavier than 5-8***. In this case we make balls 1-4 potentially heavy balls, balls 5-8 potentially light balls and balls 9-12 neutral balls. So, we weigh (2nd) balls 1 and 2 (potentially heavy) and 5 (potentially light) against balls 3 (potentially heavy), 7 (potentially light) and 12 (neutral) • If 1, 2, and 5 are heavier than 6,7, and 12, we weigh(3rd) the two potentially heavy balls (1 and 2) against each other o If they balance, it’s the third light ball (5) o If they don’t the heavier of the two is the odd ball • If 3, 7, and 12 are heavier, it’s either the heavy ball (3) on this side or the light ball (5) on the other we weigh (3rd) the heavy ball against a neutral one, if it’s heavier, then it’s the odd ball, if it balances, it’s the light ball that wasn’t weighed. • If 1,2,5 balance with 3,7,12 then the odd ball is in 4 (potentially heavy), 6, or 8 (potentially light). We then weigh (3rd) the 2 potentially lights (6 and 8) against each other. o If they balance, it’s the heavy ball (4) o If they don’t it’s the lighter of the two.

***The Third Outcome is 5-8 is heavier than 1-4 in which case the same procedure is followed but using balls 5-8 rather than 1-4

*** 

### Solution 2:  Same as previous 

Most people seem to think that the thing to do is weigh six coins against six coins, but if you think about it, this would yield you no information concerning the whereabouts of the only different coin. As we already know that one side will be heavier than the other.

So that the following plan can be followed, let us number the coins from 1 to 12. For the first weighing let us put on the left pan coins 1,2,3,4 and on the right pan coins 5,6,7,8.

There are two possibilities. Either they balance, or they don’t. If they balance, then the different coin is in the group 9,10,11,12. So for our second weighing we would put 1,2 in the left pan and 9,10 on the right. If these balance then the different coin is either 11 or 12.

Weigh coin 1 against 11. If they balance, the different coin is number 12. If they do not balance, then 11 is the different coin.

If 1,2 vs 9,10 do not balance, then the different coin is either 9 or 10. Again, weigh 1 against 9. If they balance, the different coin is number 10, otherwise it is number 9.

That was the easy part.

What if the first weighing 1,2,3,4 vs 5,6,7,8 does not balance? Then any one of these coins could be the different coin. Now, in order to proceed, we must keep track of which side is heavy for each of the following weighings.

Suppose that 5,6,7,8 is the heavy side. We now weigh 1,5,6 against 2,7,8. If they balance, then the different coin is either 3 or 4. Weigh 4 against 9, a known good coin. If they balance then the different coin is 3, otherwise it is 4.

Now, if 1,5,6 vs 2,7,8 does not balance, and 2,7,8 is the heavy side, then either 7 or 8 is a different, heavy coin, or 1 is a different, light coin.

For the third weighing, weigh 7 against 8. Whichever side is heavy is the different coin. If they balance, then 1 is the different coin. Should the weighing of 1,5, 6 vs 2,7,8 show 1,5,6 to be the heavy side, then either 5 or 6 is a different heavy coin or 2 is a light different coin. Weigh 5 against 6. The heavier one is the different coin. If they balance, then 2 is a different light coin.


*** 

Detailed solution: 
Here is my solution.  It's long because I explain in detail.

Richard 

Given:

  12 identical looking stones and a balance scale.
  1 of the stones is an oddball, and does not weigh the sames as the other 11.

Problem:

  Using three weighings on the scale, determine the oddball stone and
  whether it is heavier or lighter than the others.

Analysis:

  Any solution will require breaking the 12 stones an N piles of equal size.
  (I can't prove why, but it seems reasonable.)

  Candidate starts:

  2 piles of 6
  3 piles of 4
  4 piles of 3
  6 piles of 2

  The initial measurement must deliver the most amount of information possible.


2 piles of 6 (divide and conquer) is not a solution:

  While a simple divide and conquer appears most obvious, it can only be
  applied if the type of the oddball (L or H) is known beforehand.

  Divide and Conquer:

  Assume the oddball is light.

  Make two piles of six and compare
  - The oddball must be in the light side

  Make two piles of three from the light side and compare
  - The oddball must be in the light side

  Take two stones from the pile of three on the light side and compare
  - If equal, the oddball is the one not on the scale
    otherwise, the oddball is the stone on the light side

  While the approach above is commendable, it will not bear truth in 3 weighings
  if the oddball is in fact heavy.

  When the oddball is heavy, the comparison of three will show equal weights
  implying the heavy stone is in the heavy pile of 6.  Now you are
  'one measurement behind'. When you split the heavy side into two piles of 3,
  you do not know which one is heavier (the one that would necessarily contain
  the heavy stone).


4 piles of 3 is not a solution:

  After much empirical doodling I find four piles of three can only be solved
  if the initial comparison is unequal.
  When the first comparison of piles is equal, the oddball must be in one of the other
  two piles.  Two more measures is insufficient for determining both which and type
  of oddball is amongst the remaining six stones.


3 piles of 4 is the solution

  Only initial piles of four offers the most amount of logical inference.

  Notation:

    W1, W2, W3 mean weighing 1, 2 or 3
    The weight of the 11 same stones will be called unit weight

  Divide the stones into three piles of four

  Compare any two piles (name the piles A and B)
  Either they are equal or unequal

  W1: A = B

    The eight stones on the scale are all the same weight
    The oddball must be in the pile C (c1 c2 c3 c4) not on the scales.

    Compare any two stones from C (c1 c2) with
    one more stone from C and one unit stone (c3 1)
    Either the are equal or unequal

    W2: (c1 c2) equal (c3 1)
      The odd ball must be c4 and it must be heavy or light

      Compare c4 to a unit stone
      They must be unequal

      W3: c4 < 1
        The oddball is light and is on the scale.

      W3: c4 > 1
        The oddball is heavy and is on the scale.

    W2: unequal, (c1 c2) < (c3 1)

      Either c1 or c2 is a light oddball, or c3 is a heavy oddball.

      Compare c1 to c2
      Either they are equal or unequal

      W3: c1 <> c2
        The oddball is light and is on the scale.

      W3: c1 = c2
        The oddball is heavy and is stone c3.

    W2: unequal, (c3 1) < (c1 c2)

      Either c1 or c2 is a heavy oddball, or c3 is a light oddball.

      Compare c1 to c2
      Either they are equal or unequal

      W3: c1 <> c2
        The oddball is heavy and is on the scale.

      W3: c1 = c2
        The oddball is light and is stone c3.


    W1: A <> B

      The oddball is in one of the piles on the scale.
      The four stones in C, not on the scale, are all unit weight.
      Call the light side pile L and the heavy side pile H.

      The piles must contain an oddball in one of the following states

               Light       Heavy
              -------     -------
      Either  1 1 1 L  <  1 1 1 1
      Or      1 1 1 1  <  H 1 1 1

      New information can be obtained by manipulating the states,
      changing them from either/or to if/then inferences.

      State changes that afford information are:
      - scale balance in-equality is reversed on next weighing
      - scale balance equal on the next weighing
      - scale balance in-equality is the same on next weighing

      These state changes are accomplished by moving stones
      from one side to another, or replacing stones with stones
      of unit weight.

      After trying many configurations, the following manipulation
      yields inference that guarantees determination.

      Let's break the manipulation into steps
      s1. Remove two stones from L, call them L-off. Call the other two L-on.
      s2. Remove three stones from H, call them H-off. Call the other one H-on.
      s3. Move two H-Off stones to L.
      s4. Move one stone of L-off to H.
      s5. Move two stones of unit to H.

      Let look at the possible states after each step.

      s1. If oddball is light, L-off either contains it or not. (1 new state)
          If oddball is heavy, L-off will never contain it.

          L 1  . . 1 1     1 1 1 1
          1 1  . . 1 L     1 1 1 1
          1 1  . . 1 1     H 1 1 1

      s2. If oddball is light, H-off will never contain it.
          If oddball is heavy, H-off either contains it or not. (1 new state)

          L 1  . . 1 1     1 . . .  1 1 1
          1 1  . . 1 L     1 . . .  1 1 1
          1 1  . . 1 1     1 . . .  1 1 H
          1 1  . . 1 1     H . . .  1 1 1

      s3. When moving a stone from H-off (1 1 H) to L
          either the possible heavy is or is not moved. (1 new state)

          Put a * to the right to indicate stones from H-off

          L 1  1* 1* 1 1     1 . . .  1 . .
          1 1  1* 1* 1 L     1 . . .  1 . .
          1 1  1* H* 1 1     1 . . .  1 . .
          1 1  1* 1* 1 1     1 . . .  H . .
          1 1  1* 1* 1 1     H . . .  1 . .

      s4. When moving a stone from L-off (L 1) to H
          either the possible light is or is not moved. (1 new state)
          Put a * to the left to indicate stones from L-off

          . 1  1* 1* 1 1     1 *L . .  1 . .
          . L  1* 1* 1 1     1 *1 . .  1 . .
          . 1  1* 1* 1 L     1 *1 . .  1 . .
          . 1  1* H* 1 1     1 *1 . .  1 . .
          . 1  1* 1* 1 1     1 *1 . .  H . .
          . 1  1* 1* 1 1     H *1 . .  1 . .

      s5. Show unit stones as =
          Necessary scale balance of next step is also shown

          . 1  1* 1* 1 1  >  1 *L = =  1 . .
          . L  1* 1* 1 1  =  1 *1 = =  1 . .
          . 1  1* 1* 1 L  <  1 *1 = =  1 . .
          . 1  1* H* 1 1  >  1 *1 = =  1 . .
          . 1  1* 1* 1 1  =  1 *1 = =  H . .
          . 1  1* 1* 1 1  <  H *1 = =  1 . .

      Now compare the two piles
      Either they will be equal or unequal

      W2: equal

        Only two possible states can be equal
          . L  1* 1* 1 1  =  1 *1 = =  1 . .
          . 1  1* 1* 1 1  =  1 *1 = =  H . .
        Note the mutually exclusive states of the remaining L-off and H-off stones.
          L
          H

        Compare the remaining L-off stone to a unit stone
        Either they are equal or unequal

        W3: unequal
          The oddball is light and is on the scale.

        W3: equal
          The oddball is heavy and is the one remaining H-off.

      W2: unequal - L is still the light pile

        Only two possible states have L still light
          . 1  1* 1* 1 L  <  1 *1 = =  1 . .
          . 1  1* 1* 1 1  <  H *1 = =  1 . .
        Note the mutually exclusive states of the remaining L-on and H-on stones.
          1 L   1
          1 1   H

        Compare the two L-on stones
        Either they are equal or unequal

        W3: unequal
          The oddball is light and is on the scale.

        W3: equal
          The oddball is heavy and is H-on.

      W2: unequal - L is now the heavy pile

        Only two possible states have a 'sign change'
          . 1  1* 1* 1 1  >  1 *L = =  1 . .
          . 1  1* H* 1 1  >  1 *1 = =  1 . .
        Note the mutually exclusive states of the remaining L-swap and H-swap stones.
          1* 1*   *L
          1* H*   *1

        Compare the two H-swap stones
        Either they are equal or unequal

        W3: unequal
          The oddball is heavy and is on the scale.

        W3: equal
          The oddball is light and is L-swap.


