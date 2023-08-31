# branchDance
a place to hold some code for arduino build of binary tree branch

https://youtu.be/qRmXpOcFKcc


July 29th 2023

Made a version of the binary branch dance, that has the servos move to their positions progressively.  The bottom servo is a little shaky, but I bet If I swap out for a stronger mg90s, I can get rid of the shaking
This version adds some variables to keep track of current angle, and desired angle of the top and bottom servos and when desired angles are met it trips a Boolean, when both Booleans are tripped it will up date to a new desired angle.

July 31st 2023

branchDance4Progressive
Found a physical logical problem.  My branch was not dancing the binary dance correctly. It was because the servos were mounted in with different positions as top.  I revered the goal angles in the code for  the Zero and that solved the problem
In this progressive version I have made the tree return to the center after going to each number 100, 101,110,111.  So it matches the p5 sketch.
