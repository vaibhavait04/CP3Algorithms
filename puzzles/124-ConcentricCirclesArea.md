### Problem 

Carpeting a donut  

Given two concentric circles and a chord of the outer circle, tangent to the inner circle, of length 25m, find the area between the two circles. See illustration. No other information needed, all you need is the length of that chord.

### Solution 

There are multiple ways to look at this. 

* First is brute force; realize that the chord and the radii of the two circles forms a right triangle, so that r1^2 + 12.5^2 = r2^2, assuming r1 is the radius of the inner circle and r2 the outer. From there you can get r2 in terms of r1 or vice versa, and plug that expression into (pi * r2^2) - (pi*r1^2) = (Area between the two) to get the answer. 

* Alternatively, you can get intuitive and realize that if no other information is needed, then the answer is the same regardless of r1's value, and will remain the same even as it diminishes to 0. When r1 is 0, the chord becomes a diameter of the outer circle, and the area may be obtained in the usual method.

* On the gripping hand, you may get slightly more intuitive and note that r1^2 + 25^2 = r2^2 holds for all r1, even 0. From there, the derivation should be obvious.


