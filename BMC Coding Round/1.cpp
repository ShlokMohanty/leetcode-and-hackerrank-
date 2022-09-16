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

    // Test code
    // for (int i = 0; i < array.size(); i++) {
    //     cout << array[i] << endl;
    // }

    int count = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] % 6 == 0)
            count++;
    }

    cout << count;

    return 0;
}