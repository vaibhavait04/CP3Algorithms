## 9 balls / 12 balls find the odd 'one' out 

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


