#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class twosum
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> retrn;
        int diff;
        int size = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            diff = target - nums[i];
            if (m.find(diff) != m.end() && m.find(diff)->second != i)
            {
                retrn.push_back(i);
                retrn.push_back(m.find(diff)->second);
                return retrn;
            }
            m[nums[i]] = i;
        }
        return retrn;
    }
};