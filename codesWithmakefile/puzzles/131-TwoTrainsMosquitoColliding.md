### Problem

Two trains 
Two trains (Train A and B) with 200 km between them are travelling towards each other at 100km/h. A mosquito, initially standing on the front of Train A, starts travelling towards Train B at 150km/h. Once it reaches Train B, it turns around and travels towards Train A. The mosquito continues going back and forth between Train A and B until they collide.

How far does the mosquito travel before getting squashed between the two trains when the collide?

### Solution 

150 km - trains meet in middle - mosquito travels for 1 hour (200km / 100km/h - train speed) - Mosquito Travels 150km in one hour -> Answer 

The trains will collide in 1 hour since they are both travelling at 100km/h and there's 200km between them. This can be obtained by solving 100T = 200 - 100T, obtaining T = 1. Therefore, the mosquito will be travelling at 150km/h for a total of 1 hour, so it will travel 150km.

Alternatively, solve it in the brute force method:

t1 = time when mosquito reaches Train B

150 x t1 = 200 - 100 x t1

t1 = 4/5

At this point, both trains have travelled 80km (0.80h x 100km/h) so they are 40km apart (200km - 2 x 80km).

t2 = time when mosquito reaches Train A

150 x t2 = 40 - 100 x t2

t2 = 4/25

Similarly, t3 = 4/125, t4 = 4/625, ... , tn = 4/(5^n)

Summing the infinite series of speed x time for the mosquito: 150 [km/h] x sum(n=1 to inf){ 4/(5^n)} [h] = 150km



