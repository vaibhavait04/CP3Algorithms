### Puzzle

A person dies, and he arrives at the gate to heaven. There are three doors in the heaven. one of them leads to heaven. another one leads to a 1-day stay at hell, and then back to the gate, and the other leads to a 2-day stay at hell, and then back to the gate. every time the person is back at the gate, the three doors are reshuffled. How long will it take the person to reach heaven?

this is a probability question - i.e. it is solvable and has nothing to do with religion, being sneaky, or how au dente the pasta might be ;-)

### Answer

1/3 of the time, the door to heaven will be chosen, so 1/3 of the time it will take zero days. 
1/3 of the time, the 1-day door is chosen; of those, the right door will be chosen the next day, so 1/9 trips take 1 day. 
Similarly, 1/9 will take two days (choosing the 2-day door, then the right door).

After that, the cases split again, and again, and again. I can’t seem to make a nice infinite sum this way, so let’s try again.

Suppose the average days spent is X. 1/3 of the cases are done in zero days as before. 1/3 of the cases are 1 day plus X. 1/3 are 2 + X. 

So: 
X = 1/3 * 0 + 1/3 * (1 + X) + 1/3 * (2 + X)
  = 0 + 1/3 + X/3 + 2/3 + X/3
  = 1 + 2X/3

Therefore, 
  X/3 = 1
    X = 3
On average, it takes three days to get to heaven. Two if the noodles are limp.

Took me one blind alley, and about five minutes.

