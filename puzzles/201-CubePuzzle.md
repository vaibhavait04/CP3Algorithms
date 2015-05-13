### Problem 

Cube puzzle 

You have a normal six sided cube. I give you six different colors that you can paint each side of the cube with (one color to each side). How many different cubes can you make?

Different means that the cubes can not be rotated so that they look the same. This is important! If you give me two cubes and i can rotate them so that they appear identical in color, they are the same cube.

### SOlution 

Let X be the number of “different” cubes (using the same definition as in the problem). Let Y be the number of ways you can “align” a given cube in space such that one face is pointed north, one is east, one is south, one is west, one is up, and one is down. (We’re on the equator.) Then the total number of possibilities is X * Y. Each of these possibilities “looks” different, because if you could take a cube painted one way, and align it a certain way to make it look the same as a differently painted cube aligned a certain way, then those would not really be different cubes. Also note that if you start with an aligned cube and paint it however you want, you will always arrive at one of those X * Y possibilities.

How many ways can you paint a cube that is already “aligned” (as defined above)? You have six options for the north side, five options for the east side, etc. So the total number is 6! (that’s six factorial, or 6 * 5 * 4 * 3 * 2 * 1). Note that each way you do it makes the cube “look” different (in the same way the word is used above). So 6! = X * Y.

How many ways can you align a given cube? Choose one face, and point it north; you have six options here. Now choose one to point east. There are only four sides that can point east, because the side opposite the one you chose to point north is already pointing south. There are no further options for alignment, so the total number of ways you can align the cube is 6 * 4.

Remember, Y is defined as the number of ways you can align the cube, so Y = 6 * 4. This gives us 6! = X * 6 * 4, so X = 5 * 3 * 2 * 1 = 30.


Reference : http://www.techinterview.org/Solutions/fog0000000128.html


