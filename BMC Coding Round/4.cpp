#include <bits/stdc++.h>
using namespace std;

int processArray(vector<int> array) {
    for (auto i = array.begin(); i != array.end(); i++) {
        if (*i < 10 && *(i + 1) < 10) {
            auto j = i;

            while(*(++j) < 10) {
                *i = *j;
                array.erase(j--);
            }

            i--;
        }
    }

    int count = 0;
    for (auto i = array.begin(); i != array.end(); i++) {
        cout << *i << endl;
        count++;
    }

    return count;
}

int main() {
    vector<int> array = {222, 3, 5, 62, 124, 1, 9, 5, 66, 7};

    int len = processArray(array);

    // int input;
    // do {
    //     cin >> input;

    //     if (input > 0)
    //         array.push_back(input);
    // } while(input >= 0);

    return 0;
}