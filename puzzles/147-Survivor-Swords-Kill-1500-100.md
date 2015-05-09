### Problem 

Survivor 

There are 1500 people sitting around a circular table. They are numbered in a regular manner (1 to 1500 along the table).

Now, the 1st person gets a sword and kills the 2nd person. He then gives the sword to 3rd person, who then kills the 4th person and gives the sword to the 5th. This continues so that 1499th person kills the 1500th person and gives the sword back to 1st person.

Now the 1st person kills the 3rd and gives the sword to 5th person. This process continues until only one person remains. Which person remains?


### Solution 

Answer: 953

Hint: if the number of people is a power of 2, then the survivor is the first one (this is the difficult part to get).

Now, the power of 2 nearest to 1500 is 1024. 1500-1024=476. So after 476 people killed, the number of people remaining is a power of 2. 476th one who dies will be 476*2=952. Now the sword is with the 953rd one and he is the 1st one of remaining 1024 people. So the survivor will be 953rd one.


### Problem version 2

100 people standing in a circle in an order 1 to 100. No.1 has a sword. He kills next person (i.e. no. 2) and gives sword to next to next (i.e no.3). All person does the same until only 1 survives. Which number survives at the last?


64 -> 100 - 64 = 36 -> 36 *2 = 72 -> 73 remains

