## Question
Given two strings s1 and s2, check if they are anagrams.

## Approach
Solve by calculating the frequency of the characters in each string. If the frequencies are equal, then they are anagrams. The ideal data structure to use is the Hash table. This maps unique keys to values. In C++ STL, a hash map can be implemented as an `unordered_map`. The following is an example to use `unordered_maps` in C++.
```cpp
// C++ program to demonstrate functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	// Declaring umap to be of <string, int> type
	// key will be of string type and mapped value will
	// be of int type
	unordered_map<string, int> umap;

	// inserting values by using [] operator
	umap["GeeksforGeeks"] = 10;
	umap["Practice"] = 20;
	umap["Contribute"] = 30;

	// Traversing an unordered map
	for (auto x : umap)
	cout << x.first << " " << x.second << endl;

}
```