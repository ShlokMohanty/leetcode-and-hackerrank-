## Entering Romulus
---
#### Problem Statement
The problem was that ethan is developing a game and it's called entering romulus and the main character playing the game have to enter the tallest building from the array of supplied buildings but he can choose only from n portion of the given length of the array

##### Example
*Suppose 7 buildings are there, we input [12,1,8,9,3,48] and size of n is 2 so first he is allowed to choose from 12 and 1 and then after choosing he can choose again from 1 and 8*

**He can choose multiple buildings with same length, we have to calculate the maximum possible score, score=score+height he choose**

###### Note: A less efficient sliding window approach was employed.