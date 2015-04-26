### Problem 

A high school has a strange principal. On the first day, he has his students perform an odd opening day ceremony:

There are one thousand lockers and one thousand students in the school. The principal asks the first student to go to every locker and open it. Then he has the second student go to every second locker and close it. The third goes to every third locker and, if it is closed, he opens it, and if it is open, he closes it. The fourth student does this to every fourth locker, and so on. After the process is completed with the thousandth student, how many lockers are open?

### Solution 

The only lockers that remain open are perfect squares (1, 4, 9, 16, etc) because they are the only numbers divisible by an odd number of whole numbers; every factor other than the number’s square root is paired up with another. 
Thus, these lockers will be “changed” an odd number of times, which means they will be left open. All the other numbers are divisible by an even number of factors and will consequently end up closed.

So the number of open lockers is the number of perfect squares less than or equal to one thousand. These numbers are one squared, two squared, three squared, four squared, and so on, up to thirty one squared. (Thirty two squared is greater than one thousand, and therefore out of range.) So the answer is thirty one.

31^2 = 961 
32^2 = 1024

