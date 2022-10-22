// The right approach could take an insane amount of time to implement. Make the best use of built-in functions,
// whenever possible. Also, note the order in which we update the left and right values after we check for an equality.

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr) {
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        int sum_left = 0, sum_right = 0;

        for (int j = 0; j <= i; ++j) {
            sum_left += arr.at(j);
        }

        for (int j = i; j < arr.size(); ++j) {
            sum_right += arr.at(j);
        }

        if (sum_left == sum_right) {
            index = i;

            break;
        }
    }

    return index;
}

int solve_better(vector<int> &arr) {
    int index = -1;

    int left_sum = 0;
    int right_sum = accumulate(arr.begin(), arr.end(), 0);

    for (int i = 0; i < arr.size(); i++) {
        right_sum -= arr[i];

        if (left_sum == right_sum)
            return i;

        left_sum += arr[i];
    }

    return -1;
}

int main() {
    int t = 1;

    vector<int> in = {1, 7, 3, 6, 5, 6};

    while (t--) {
        int i = solve_better(in);
        
        cout << "Pivot Index: " << i;
    }

    return 0;
}