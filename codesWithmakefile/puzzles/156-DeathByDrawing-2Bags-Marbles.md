### Puzzle 

Death by drawing ? 

You are a prisoner in a strange foreign land, and a random drawing will decide your fate. You are given 2 bags, 10 white marbles, and 10 black marbles. You are to place the marbles in the bags in any arrangement you choose, as long as all marbles are placed and neither bag is left empty. A blindfolded official will then randomly choose one of the bags and randomly remove a marble from it. If the marble is white, you will be released. If it is black, you will be executed. How should you arrange the marbles to maximize your chance of going free?

### Solution 


Place one white marble in one bag, and all the rest in the other. This gives you about a 73.7% chance of being released.  

I found the easiest way of solving this was trial and error. I used Excel to check all possible values. Let B and W respectively be the number of black or white balls placed in one bag. The odds of being freed are then 0.5 * (W/(W+B)+(10-W)/(20-W-B)). Here the mathematics gets too messy for me. To maximize this function's value, I'm guessing you differentiate and set it equal to zero. But my calculus is way too rusty, since there are two variables to deal with. Partial derivatives? I'm sure someone can answer this.


