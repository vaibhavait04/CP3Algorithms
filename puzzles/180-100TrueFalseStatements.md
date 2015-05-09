### Puzzle 

A sheet of paper has statements numbered from 1 to 100. 
Statement n says "exactly n of the statements on this sheet are false." 
Which statements are true and which are false? What if we replace "exactly" by "at least"?

### Answer 

In these 100 statements one and only one statement can be correct. That means 99 statements have to be incorrect and thus statement 99th is true

If replaced by "at least", and the "real" number of false statements is x, then statements x+1 to 100 will be false (since they falsely claim that there are more false statements than there actually are). So, 100-x are false, ie. x=100-x, so x=50. The first 50 statements are true, and statements 51 to 100 are false.

However, there is a hidden and incorrect assumption in this argument. To see this, suppose that there is one statement on the sheet and it says "One statement is false" or "At least one statement is false," either way it implies "this statement is false," which is a familiar paradoxical statement. We have learned that this paradox arises because of the false assumption that all statements are either true or false. This is the hidden assumption in the above reasoning.

If it is acknowledged that some of the statements on the page may be neither true nor false (i.e., meaningless), then nothing whatsoever can be concluded about which statements are true or false.

This problem has been carefully contrived to appear to be solvable (like the vacuous statement "this statement is true"). By changing the numbers in some statements and changing "true" to "false," various circular forms of the liar's paradox can be constructed. A much more complicated version of the same problem is:

1) At least one of the last two statements in this list is true.
2) This is either the first true or the first false statement in the list.
3) There exist three consecutive false statements.
4) The difference beween the numbers of the last true statement and the first true statement is a factor of the unknown number.
5) The sum of the numbers of the true statements is the unknown number.
6) This is not the last true statement.
7) Each true statement's number is a factor of the unknown number.
8) The unknown number equals the percentage of these statements which are true.
9) The number of different factors which the unknown number has (excluding 1 and itself) is more than the sum of the numbers of the true statements.
10) There are no three cosecutive true statements.

What is the number?

The incorrect but plausible solution is: 
By 2, either way 1 must be false, and then so must both 9 and 10.  
6, if false, says "This is the last true statement", which gives a paradox, thus 6 must be true, and so must 7 and/or 8.  
7 and 8 cannot both be true, as the number had to be a multiple of 6,7,8 , that is a multiple of 168 (by 7), and less than 100 (by 8) 
If 8 is false, then 3 is true (8,9,10 is false), if 8 is true, then 3 is false (3 cannot be true when both 6 and 8 are true, then there are no three consecutive statements left).

So we have either

A) F X F X X T F T F F or 
B) F X T X X T T F F F

In A), 4 and 5 must be true (by false 10), and 2 may be true or false. 
So by 5 the number shall be either 27 (2+3+4+5+6+7) or 25 (3+4+5+6+7). 
None of these can fullfill 8, though, so A) is out leaving us with B)

Now, (by 7) 3,6 and 7 are factors, the number must be a multiple of 42, as 2+3+4+5+6+7=27, 5 must be false.

By false 10, 2 and 4 must be true, that is 5 shall be a multiple of the number. 
Now the number must be a multiple of 2,3,4,5,6 and 7, that is a multiple of 3*4*5*7=420. 
420 has 22 different factors (2,3,4,5,6,7,10,12,14,15,20,21,28,30,35,42,60,70,84,105,140,210) and the sum 2+3+4+6+7 = 22, 
so the only multiple of 420 that fulfills false 9 is 420.

If you know any other answers please comment here..

