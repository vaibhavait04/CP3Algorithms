### Problem 

Going to the Track

The London racetrack needs to submit its top three horses to the Kentucky Derby next month in order to compete for a prize. However in a recent electrical storm, all the racetrack's previous race history was erased such that no one knows the previous times of any of the horses. To make matters worse, each horse looks identical and it is impossible to remember which ones were the fastest.

London racetrack is home to 25 horses, but their track can only race 5 horses at a time. What is the fewest number of races that can be conducted in order to determine the 3 fastest horses?

### Solution 



* Divide the 25 horses into groups of 5 and race each group independently. (5 races)

* Place the winner of each preliminary race in a Championship race to determine the fastest horse of the 25. (1 race) -> 1

* Now you have the fastest horse but you still need to determine the 2nd and 3rd fastest horse. 
> You can start by eliminating all horses that finished 4th or 5th in the preliminary races since there are clearly three horses faster than each of them (15 horses remaining).
> Next, you can eliminate all the horses from the groups that the 4th and 5th place Championship horses came from for the same logic (15 - 2x3 = 9 horses remain). 
> Next, you can eliminate the horses that placed 2nd and 3rd from the group where the 3rd place Championship horse came from, as well as the horse that placed 3rd from the group where the 2nd place Championship horse came from (9 - 2 - 1 = 6 horses remain). 
> Lastly, you can set aside the winner of the Championship race as s/he is clearly the fastest of the whole lot (5 horses remain).

* Now that you have 5 horses left, you can determine the 2nd and 3rd fastest horses of the entire group of 25 by the winner and 2nd place finisher of this last and final race. (1 race) ===>>>> 7 races in total.

5 5 5 5 5  -> total 5 races to identify 1 of each -> 1 to idenfity fastest 
1 2 3 4 5 

4 5 5 (5)(5) -> remove (5),(5) last two, removed fastest 1
1 2 3 

2 2 1  -> take (2,3) of 1 (less than fastest) ; (1,2) of 2 (less than fastest compare); (1) of 3 (fastest of least) 


