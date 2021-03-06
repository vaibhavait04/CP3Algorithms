### Problem : All the Kings Wine

So there's this king. Someone breaks into his wine cellar where he stores 1000 bottles of wine. This person proceeds to poison one of the 1000 bottles, but gets away too quickly for the king's guard to see which one he poisoned or to catch him.

The king needs the remaining 999 safe bottles for his party in 4 weeks. The king has 10 servants who he considers disposable. The poison takes about 3 weeks to take effect, and any amount of it will kill whoever drinks it. How can he figure out which bottle was poisoned in time for the party?

### Solution 

Hint: Binary numbers value 

There are a few keys to this puzzle: 
1) The king has to mix wine in order to isolate the single poisoned one. 
2) There are 10 servants. 
After about 3 weeks, each one can be either dead or alive, meaning that there are 2^10 = 1024 possible outcomes. Since 1024 > 1000, it's actually possible for some scheme to work. 3) This puzzle is much easier if you have any knowledge of binary numbers

Here's the scheme: 
The king assigns each servant a number from 1-10. The king assigns each bottle a number from 0-999. When he labels them, though, he writes the number on the bottle in binary with ten digits, like this: 0: 000000000 1: 000000001 2: 000000010 3: 000000011 4: 000000100 5: 000000101 ... 999: 1111100111 and so on. 

Now, each servant takes a small sip from every bottle where the servant's number equals 1 in the binary number on the bottle. So, the 1st servant drinks from every other bottle. The second servant drinks from bottles 2, 3, 6, 7, 10, 11, etc.

Then based on the combination of servants that die, he can identify the poisoned bottle. For example, if none of them die, the 0th bottle was poisoned because none of them drank from it. If only servant 1 dies, then bottle 1 was poisoned, because he's the only person who drank from it. Finally, if servants 1, 2, 3, 6, 7, 8, 9, and 10 die, then the 999th bottle was poisoned (see how this matches up with 999 above).



### Problem 2

King and wine bottles

A bad king has a cellar of 1000 bottles of delightful and very expensive wine. 
A neighboring queen plots to kill the bad king and sends a servant to poison the wine. Fortunately (or say unfortunately) the bad king’s guards catch the servant after he has only poisoned one bottle. 
Alas, the guards don’t know which bottle but know that the poison is so strong that even if diluted 100,000 times it would still kill the king. 
Furthermore, it takes one month to have an effect. The bad king decides he will get some of the prisoners in his vast dungeons to drink the wine. 
Being a clever bad king he knows he needs to murder no more than 10 prisoners – believing he can fob off such a low death rate – and will still be able to drink the rest of the wine (999 bottles) at his anniversary party in 5 weeks time. 
Explain what is in mind of the king, how will he be able to do so ? (of course he has less then 1000 prisoners in his prisons)


