### Puzzle -  Is Your Husband a Cheat?

A certain town comprises of 100 married couples. 
Everyone in the town lives by the following rule: 
> If a husband cheats on his wife, the husband is executed as soon as his wife finds out about him. 
> All the women in the town only gossip about the husbands of other women. 
> No woman ever tells another woman if her husband is cheating on her.  

So every woman in the town knows about all the cheating husbands in the town except her own. It can also be assumed that a husband remains silent about his infidelity. One day, the mayor of the town announces to the whole town that there is at least 1 cheating husband in the town. 
What do you think happens?

### Answer 

Stumped? Let’s solve this methodically. Say there was only 1 cheating husband in the town. 
Day1: There will be 99 women who know exactly who the cheater is. The 1 remaining woman, who is being cheated on, would have assumed there are no cheaters. But now that the mayor has confirmed that there is at least one cheater, she realizes that her own husband must be cheating on her. So her husband gets executed on the day of the announcement.

Known - 1 cheater 
Day 1 - no one dies and 1 woman knows zero cheaters 99 knows 1 cheater 
Day 2 - 1 woman - husband killed 

Now let’s assume there are 2 cheaters in the town. 
Day 1: There will be 98 women in the town who know who the 2 cheaters are. 
The 2 wives, who are being cheated on, would think that there is only 1 cheater in the town. 

Day 2: Since neither of these 2 women know that their husbands are cheaters, they both do not report their husbands in on the day of the announcement. The next day, when the 2 women see that no husband was executed, they realize that there could only be one explanation – both their husbands are cheaters. Thus, on the second day, 2 husbands are executed.

2 women knows 1 cheater 98 knows 2 cheaters. Day 1 - no die, Day 2 - no die. 

Through induction, it can be proved that when this logic is applied to n cheating husbands, they all die on the n-th day after the mayor’s announcement.

### Puzzle - Genie with the hats 

A bunch of men are on an island, A genie comes down and gathers everyone together and places a magical hat on some people’s heads (i e , at least one person has a hat). The hat is magical: it can be seen by other people, but not by the wearer of the hat himself. To remove the hat, those (and only those who have a hat) must dunk themselves underwater at exactly midnight. If there are n people and c hats, how long does it take the men to remove the hats? The men cannot tell each other (in any way) that they have a hat.
Note: Genie does not tell how many hats she has put.

### Solution 

Lets take some simple cases first
c = 1: in this case person who has hat on his head can see that no one else has hat on their head, so he will understand that he is the one with hat.

c = 2: in this case person with hat will see one other person with hat, rest all will see two hats. Now had there been only 1 hat, this case would have been solved on very first day, but in this case no one will go on first night, so the guy who see one hat will understand that there must be one hat on his head, so both of them will go underwater on second night.

c = 3: in this case person with hat will see two hats and rest all will see two hats, now had there been 1 or 2 hats some guys would have gone on first or second night, thus on third day guys who see 2 hats will understand that they have hats on their head and they will all go underwater on third night.

Similarly we can see that it will take c days to remove all hats.

