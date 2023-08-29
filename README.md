# branchDance
a place to hold some code for arduino build of binary tree branch

https://youtu.be/qRmXpOcFKcc


July 29th 2023

Made a version of the binary branch dance, that has the servos move to their positions progressively.  The bottom servo is a little shaky, but I bet If I swap out for a stronger mg90s, I can get rid of the shaking
This version adds some variables to keep track of current angle, and desired angle of the top and bottom servos and when desired angles are met it trips a Boolean, when both Booleans are tripped it will up date to a new desired angle.
