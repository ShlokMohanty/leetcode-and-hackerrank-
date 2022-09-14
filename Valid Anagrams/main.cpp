// Code by Desh Iyer

// This code is case sensitive. I.e., 'e' and 'E' are treated differently.

#include <bits/stdc++.h>
using namespace std;

// Function prototypes
bool checkAnagrams(string, string);
unordered_map<char, int> createMap(string);

int main() {
    string s1, s2;

    cout << "String 1: ";
    cin >> s1;

    cout << "String 2: ";
    cin >> s2;

    // Store the return value from the function
    bool result = checkAnagrams(s1, s2);

    cout << "\n\n";
    result == true ? cout << "The strings are anagrams" : cout << "The strings are NOT anagrams";

    return 0;
}

// Function to check whether the given strings are anagrams or not
bool checkAnagrams(string a, string b) {
    // Are they the same length?
    if (a.length() != b.length())
        return false;
    else {
        int len = a.length();

        // Creating two hash maps using a defined function
        unordered_map<char, int> freqA = createMap(a);
        unordered_map<char, int> freqB = createMap(b);

        // Traversing both hash maps
        cout << "\nPrinting Hash Map for \'" << a << "\'" << endl;
        for (auto i : freqA)
            cout << i.first << " : " << i.second << endl;

        cout << "\n\nPrinting Hash Map for \'" << b << "\'" << endl;
        for (auto i : freqA)
            cout << i.first << " : " << i.second << endl;

        // Are the hash maps equal?
        if (freqA == freqB)
            return true;
        return false;
    }
}

// Function to create a hash map of a string's characters and return it
unordered_map<char, int> createMap(string A) {
    int len = A.length();
    unordered_map<char, int> ret;

    // Traverse the string
    for (int i = 0; i < len; i++) {
        char ch = A[i];

        // Check if the key exists
        if (ret.find(ch) == ret.end())
            // Increment if so
            ret[ch]++;
        else
            ret[ch] = 1;
    }

    return ret;
}