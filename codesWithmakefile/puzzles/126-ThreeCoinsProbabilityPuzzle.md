### Problem 

You have 3 coins, one always comes up heads, the second always comes up tails, and the third is a fair coin. You select a coin at random. After selecting a coin, you flip it twice and get heads both times. What is the probability that your next flip is heads?

Follow up: Suppose you flipped twice and got the same outcome both times (either HH or TT), then what's the probability that your next two flips match the first two (e.g. if you saw HH, your next two are HH)

### Solution 

First case. Since you are going to get heads twice it necessarily means you did not choose the Tails coin. This gives you two scenarios:

1 - 1/2 chance of choosing the fair coin times 1/2 chance of getting heads again. 2 - 1/2 chance of choosing the Heads coin times 1 chance of getting heads again,

(1/2 * 1/2) + (1/2 * 1) = 3/4 or 75%

Second case.

Just used Bayes's theorem and some arithmetic. The probability that you have a fair coin given the HH appearance is only 1/5; hence 4/5 it's the unfair heads coin (it's never the tails one obviously). The first comes from Bayes's theorem giving that, prob(fair coin | HH) is equal to P(HH|fair) P(fair) / P(HH), which is (1/4)(1/3)/(1/3 1 + 1/3 1/4) when keeping in mind the background info. Then (1/5)(1/2) + (4/5)(1) = 9/10 = 0.90

Second case : Explanation 2: 

The key is to infer the probability that each coin was selected based on the (heads,heads) outcome for the first two flips.

Label the three coins:

    C1 - TT
    C2 - HT
    C3 - HH

Data = HH. In general, as per Bayes' Rule, P(Ci | Data) is proportional to P(Data | Ci)*P(Ci), so:

    P(C1 | Data) proportional to 0*(1/3) -----> 0 (normalized)
    P(C2 | Data) proportional to (1/4)*(1/3) --> 1/5
    P(C3 | Data) proportional to (1/4)*(1/3) --> 4/5

Now, P(H | Data) = sum over Ci ( P(H | Ci) * P(Ci | Data ) = 0 * 0 + (1/2) * (1/5) + 1 * (4/5) = 9/10.

In summary, probability of heads on the third flip (given the first two flips being HH) is 9/10.

### Wrong solution to case 2

For the second case. Three scenarios:

1 - 1/3 chance of choosing the Heads coin times 1 chance of getting Heads twice. 
2 - 1/3 chance of choosing the Tails coin times 1 chance of getting Tails twice. 
3 - 1/3 chance of choosing the fair coin, but since you've already got the same result twice, you only have the probability of getting the same outcome twice again which would be 1/2 * 1/2 = 1/4.

1/3 * (1 + 1 + 1/4) = 3/4 or 75%
