# DAY-21
**Alternating Groups 1 (Easy) (LC Bitwisely 134)**

Problem Statement

There is a circle of red and blue tiles. You are given an array of integers colors. The color of tile i is represented by colors[i] :

colors[i] == 0 means that tile i is red.

colors[i] == 1 means that tile i is blue.

Every 3 contiguous tiles in the circle with alternating colors (the middle tile has a different color from its left and right tiles) is called an alternating group.Return the number of alternating groups.
Note that since colors represents a circle, the first and the last tiles are considered to be next to each other.

Solution approach 

Can apply two approaches I used sliding window of fixed size 3 to check if my middle element (right) is not equal to my right+1 & right-1 & if true incremented count.
Calculated seperately for last two tiles if they form alternating tiles ar not. (took 4ms of runtime)

Can simplify the same process by using for loop from 1 to n-1 without using sliding window. (took 3ms of runtime).
