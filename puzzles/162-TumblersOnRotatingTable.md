### Puzzle 

Tumblers on a Rotating Table 

 A blind gnome and an evil goblin take turns to play a game. Four tumblers are placed at the corners of a square table. The initial configuration of the tumblers (facing up or facing down) is chosen by the evil goblin. When the blind gnome gets his turn, he is allowed to specify a subset of the four tumblers and flip them simultaneously. To be precise, he may choose “one tumbler”, “two diagonally opposites”, “two adjacent”, “three tumblers” or “four tumblers” lying in front of him, and flip them simultaneously. After flipping, if all four tumblers are upright, he wins the game! Otherwise, the game continues and the evil goblin is allowed to rotate the table by an amount of his choice. Can the blind gnome win the game with a deterministic strategy?

### Solution 

  If there were only two cards, then “flip both” — “flip one” — “flip both” would ensure a victory for the blind gnome. For the case of four cards, let F denote “all four cards”, A denote “two adjacent cards”, D denote “two diagonally opposite cards”, O denote “one card”. Then the following 15-step sequence ensures victory for the blind gnome: F, D, F, A, F, D, F, O, F, D, F, A, F, D, F. The procedure can be generalized to 2^n cards. This problem is studied in detail by Ehrenborg and Skinner (see bibliography below); they call it “The Blind Bartender’s Problem”.
                         A variant of the above problem allows the blind gnome to first “touch” any t out of n tumblers on a polygonal table with n sides. Touching allows the gnome to deduce which of the t tumblers he touched are upright, and then to decide which of these t tumblers to flip. It was this variant that was originally published in Martin Gardner’s article in Feb 1979. For four tumblers, the blind gnome can win in five moves, as Gardner showed in his subsequent article in Mar 1979. The problem generated quite some interest. Two pairs of mathematicians independently proved that the blind gnome can win with a deterministic strategy if and only if t ≥ n(p-1)/p where p is the largest prime factor of n (Lewis and Willard in 1980; Laaser and Ramshaw 1981). These proofs are quite involved

