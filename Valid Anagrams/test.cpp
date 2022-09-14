#include <bits/stdc++.h>
using namespace std;

bool checkAnagrams(string, string);
int inString(char, string);

int main() {
    string s1, s2;

    s1 = "danger";
    s2 = "garden";

    bool result = checkAnagrams(s1, s2);

    result == true ? cout << "The strings are anagrams" : cout << "The strings are NOT anagrams";

    return 0;
}

bool checkAnagrams(string a, string b) {
    if (a.length() != b.length())
        return false;
    else {
        int len = a.length();

        // Creating two hash maps
        unordered_map<char, int> freqA;
        unordered_map<char, int> freqB;

        for (int j = 0; j < len; j++) {
            char ch = a[j];

            freqA[ch] = inString(ch, a);
            freqB[ch] = inString(ch, b);
        }

        // Traversing both hash maps
        cout << "Freq A:\n\n";
        for (auto i : freqA)
            cout << i.first << " : " << i.second << endl;
        
        cout << "\nFreq B:\n\n";
        for (auto i : freqA)
            cout << i.first << " : " << i.second << endl;

        if (freqA == freqB) 
            return true;
        return false;
    }
}

int inString(char ch, string A) {
    int len = A.length();
    int count;

    for (int i = 0; i < len; i++) {
        if (A[i] == ch) {
            count++;
        }
    }

    return count;
}