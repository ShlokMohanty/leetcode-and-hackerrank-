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

    for (auto i = array.begin(); i != array.end(); i++) {
        // Thanks KT!
        if (*i < 100 && *(i + 1) < 100) {
            auto j = i;

            while(*(++j) < 100) {
                *i += *j;
                array.erase(j--);
            }

            i--;
        }
    }

    for (auto i = array.begin(); i != array.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}