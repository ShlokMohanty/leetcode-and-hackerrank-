## LeetCode Problem 12
### Convert Integers to their Roman equivalent

**Problem** - Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

| ROMAN 	| INTEGER 	|
|-------	|---------	|
| I     	| 1       	|
| V     	| 5       	|
| X     	| 10      	|
| L     	| 50      	|
| C     	| 100     	|
| D     	| 500     	|
| M     	| 1000    	|
---
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.

***problem requires us to change integer to their roman equivalent***

for example:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.


**Approach**

The language used in the solution is c++

Creating a map<integer,string> to map the values of all fundamental roman to integer equivalent like M,D,C,L,X,V,I. Also we will add some basic
map values like IV =4 and XL = 40 

Now we will use iterator to traverse the map and compare the value provided to the key of the map that is integer if the value is greater than
that of the integer value provided we will append the corresponding value of the map that is string to our solution string and also reduce the 
value of num with the key value of the map

**Note** - Since the map sort the key in increasing order we will use 'rbegin' to reverse iterate the map.
