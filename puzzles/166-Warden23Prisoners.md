### The Warden and 23 prisoners Puzzle 
                 
The warden meets with 23 new prisoners when they arrive. He tells them, "You may meet today and plan a strategy. But after today, you will be in isolated cells and will have no communication with one another. 

"In the prison is a switch room, which contains two light switches labeled 1 and 2, each of which can be in either up or the down position. I am not telling you their present positions. The switches are not connected to anything.

"After today, from time to time whenever I feel so inclined, I will select one prisoner at random and escort him to the switch room. This prisoner will select one of the two switches and reverse its position. He must flip one switch when he visits the switch room, and may only flip one of the switches. Then he'll be led back to his cell.
"No one else will be allowed to alter the switches until I lead the next prisoner into the switch room. I'm going to choose prisoners at random. I may choose the same guy three times in a row, or I may jump around and come back. I will not touch the switches, if I wanted you dead you would already be dead.

"Given enough time, everyone will eventually visit the switch room the same number of times as everyone else. At any time, anyone may declare to me, 'We have all visited the switch room.' 

"If it is true, then you will all be set free. If it is false, and somebody has not yet visited the switch room, you will all die horribly. You will be carefully monitored, and any attempt to break any of these rules will result in instant death to all of you" 

What is the strategy they come up with so that they can be free?

### Solution

The team nominates a leader. The group agrees upon the following rules:
 
The leader is the only person who will announce that everyone has visited the switch room. All the prisoners (except for the leader) will flip the first switch up at their very first opportunity, and again on the second opportunity. If the first switch is already up, or they have already flipped the first switch up two times, they will then flip the second switch. Only the leader may flip the first switch down, if the first switch is already down, then the leader will flip the second switch. The leader remembers how many times he has flipped the first switch down. Once the leader has flipped the first switch down 44 times, he announces that all have visited the room. 

It does not matter how many times a prisoner has visited the room, in which order the prisoners were sent or even if the first switch was initially up. Once the leader has flipped the switch down 44 times then the leader knows everyone has visited the room. If the switch was initially down, then all 22 prisoners will flip the switch up twice. If the switch was initially up, then there will be one prisoner who only flips the switch up once and the rest will flip it up twice.

The prisoners can not be certain that all have visited the room after the leader flips the switch down 23 times, as the first 12 prisoners plus the leader might be taken to the room 24 times before anyone else is allowed into the room. Because the initial state of the switch might be up, the prisoners must flip the first switch up twice. If they decide to flip it up only once, the leader will not know if he should count to 22 or 23. 

In the example of three prisoners, the leader must flip the first switch down three times to be sure all prisoners have visited the room, twice for the two other prisoners and once more in case the switch was initially up.


### Puzzle Version 2 - 100 Prisoners in Solitary Cells

100 prisoners are stuck in the prison in solitary cells. The warden of the prison got bored one day and offered them a challenge. He will put one prisoner per day, selected at random (a prisoner can be selected more than once), into a special room with a light bulb and a switch which controls the bulb. No other prisoners can see or control the light bulb. The prisoner in the special room can either turn on the bulb, turn off the bulb or do nothing. On any day, the prisoners can stop this process and say “Every prisoner has been in the special room at least once”. If that happens to be true, all the prisoners will be set free. If it is false, then all the prisoners will be executed. The prisoners are given some time to discuss and figure out a solution. How do they ensure they all go free?


### Answer 

Since this is the only way they will EVER get out of that prison, they decide to work together and make a plan. They select one prisoner (Bob, easier to refer) as the counter.

Every time any prisoner is selected other than Bob, they follow these steps. If they have never turned on the light bulb before and the light bulb is off, they turn it on. If not, they don’t do anything (simple as that). Now if Bob is selected and the light bulb is already on, he adds one to his count and turns off the bulb. If the bulb is off, he just sits there meditates or whatever he wants to. The day his count reaches 99, he calls the warden and tells him “Every prisoner has been in the special room at least once”.

So how does this solution work? Every time a prisoner enters the room first, he turns on the bulb if it is off. This way every prisoner turns on the bulb only once. When Bob enters and sees the bulb on, he knows that one new prisoner has entered the room so he adds one to his count. So when his counter reaches 99, he knows the rest of them have all been in the special room and obviously, he has been in the special room.

