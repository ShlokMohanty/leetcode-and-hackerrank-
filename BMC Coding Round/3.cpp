#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> array;

    // Inputting till a -ve
    int input;
    do {
        cin >> input;

        if (input > 0)
            array.push_back(input);
    } while(input >= 0);

    int highest = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > highest && array[i] < 100)
            highest = array[i];
    }

    cout << highest;

    return 0;
}