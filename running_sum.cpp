#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        vector<int> result = {nums[0]};
        // int n ;
        // cin>>n;
        // int sum=0

        // for(int i=0;i<n;i++)
        for (int i = 1; i < nums.size(); i++) {
            result.push_back(result.back() + nums[i]);
        }
        return result;
    }
};

// arr[0] = 1, arr[1] = 2, arr[2] = 3 , arr[3]=4
// arr[i] + arr[i+1] = 1+2 = 3 + arr[2] = 6 + arr[3] = 10
// 1st
