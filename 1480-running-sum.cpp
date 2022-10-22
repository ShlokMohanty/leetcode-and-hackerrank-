// Think about using the input and making the result array in one pass of the input array.
// Those kinds of solutions are usually the most space and memory efficient.

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> in) {
    vector<int> ans;

    int sum = 0;
    for (auto i : in) {
        ans.push_back(sum += i);
    }

    for (auto i : ans) {
        cout << i << " ";
    }

    return ans;
}

// Here's a better solution
vector<int> solve_better(vector<int> &in) {
    for(int i = 1; i < in.size(); i++)
        in[i] += in[i - 1];

    // for (auto i : in) {
    //     cout << i << " ";
    // }
}

int main() {
    int t = 1;

    vector<int> in = {1, 2, 3, 4};

    while (t--) {
        solve_better(in);
        
        for (auto i : in) {
            cout << i << " ";
        }
    }

    return 0;
}