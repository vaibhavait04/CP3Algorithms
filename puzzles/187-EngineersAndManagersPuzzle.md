###  Engineers and Managers Puzzle

In a city, The police has surrounded the Bank. There are 50 people in the building. Each person is either an engineer or a manager of the bank. All computer files have been deleted, and all documents have been shredded by the managers. The problem confronting the police is to separate the people into these two classes, so that all the managers are locked in a room  and all the engineers are freed. every people knows the status of all others. The interrogation consists entirely of asking person i if person j is an engineer or a manager. The engineers always tell the truth. What makes it hard is that the managers may not tell the truth. In fact, the managers are evil geniuses who are conspiring to confuse the interrogators.

1. Under the assumption that more than half of the people are engineers, can you find a strategy for the Police to find one engineer with at most 49 questions?
2. Is this possible in any number of questions if half the people are managers?
3. Once an engineer is found, he/she can classify everybody else. Is there a way to classify everybody in fewer questions?

### Answer 

#### Part 1: 
Here's an n-1 query solution to part 1. Maintain three sets of people: UNSEEN, STACK, and DISCARD. Initialize the process by picking one arbitrarily to be the STACK, everything else is UNSEEN. Repeat the following step until UNSEEN is empty:

Pick an UNSEEN element x, remove it from UNSEEN. Ask the top of the STACK y about x. If y says "manager" pop y off the stack and DISCARD both x and y. If it says "engineer" add x to the top of the STACK.

After all elements have been processed in this way (n-1 comparisons), the top of the stack must be an engineer.

Why does this work? First observe that whenever we discard a pair, at least one of them is a manager. So among the rest of them (STACK and UNSEEN) a majority must still be engineers. So at the end, when UNSEEN is empty, there must be an engineer in the stack, therefore the top of the stack must be an engineer.

This can be improved to 48 simply by stopping one earlier. When there's one UNSEEN left, if the stack is empty, that UNSEEN one is an engineer. Otherwise, the top of the stack must be an engineer.

first step we can just throw out one person, and appy this algorithm to the remaining 49 obtaining 47 comparisons. This gives the optimal algorithm.

This is optimal. The proof appears in the solution of homework assignment 7 of Steven Rudich's course 15-251 taught at CMU in the spring semester of 2002. See Solution 7.

####  Part 2: If half or more of the people are managers, then the problem cannot be solved. The managers can ensure this simply by always lying. Now there's way to separate the two sets of people. Each one simply claims the others are Managers.

#### Part 3: I don't know any better solution than to simply using the solution to Part 1 to identify everybody.


