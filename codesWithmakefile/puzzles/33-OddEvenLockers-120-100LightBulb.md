### Problem 

A high school has a strange principal. On the first day, he has his students perform an odd opening day ceremony:

There are one thousand lockers and one thousand students in the school. The principal asks the first student to go to every locker and open it. Then he has the second student go to every second locker and close it. The third goes to every third locker and, if it is closed, he opens it, and if it is open, he closes it. The fourth student does this to every fourth locker, and so on. After the process is completed with the thousandth student, how many lockers are open?

### Solution 

The only lockers that remain open are perfect squares (1, 4, 9, 16, etc) because they are the only numbers divisible by an odd number of whole numbers; every factor other than the number’s square root is paired up with another. 
Thus, these lockers will be “changed” an odd number of times, which means they will be left open. All the other numbers are divisible by an even number of factors and will consequently end up closed.

So the number of open lockers is the number of perfect squares less than or equal to one thousand. These numbers are one squared, two squared, three squared, four squared, and so on, up to thirty one squared. (Thirty two squared is greater than one thousand, and therefore out of range.) So the answer is thirty one.

31^2 = 961 
32^2 = 1024


### Problem flavor 2 

100 Light Bulbs

There are 100 light switches, all of them are off. First, you walk by them, turning all of them on. Next, you walk by them turning every other one off. Then, you walk by them changing every third one. On your 4th pass, you change every 4th one.

You repeat this for 100 passes. At the end, how many lights will be on?

### Solution 

Each of the 100 light switches changes its state on passes whose number is a factor of the light switch's number. For example, the 12th light will change its state on the 1st, 2nd, 3rd, 4th, 6th, and 12th passes.

Factors usually come in pairs: (1, 12), (2, 6), (3, 4), so there's an even number of them. If the light's state gets changed an even number of times, it'll remain off.

Only for perfect squares do the factors not come in pairs. For example, 9 will get changed on the 1st, 3rd, and 9th passes (it only has 3 factors). So perfect squares have an odd number of unique factors and so end up on. There are 10 perfect squares between 1 and 100.



