#include <bits/stdc++.h>
using namespace std;
class integer_to_roman
{
public:
    string solution(int num)
    {
        string s = "";
        map<int, string> mp;
        mp.insert(make_pair(1000, "M"));
        mp.insert(make_pair(900, "CM"));
        mp.insert(make_pair(500, "D"));
        mp.insert(make_pair(400, "CD"));
        mp.insert(make_pair(100, "C"));
        mp.insert(make_pair(90, "XC"));
        mp.insert(make_pair(50, "L"));
        mp.insert(make_pair(40, "XL"));
        mp.insert(make_pair(10, "X"));
        mp.insert(make_pair(9, "IX"));
        mp.insert(make_pair(5, "V"));
        mp.insert(make_pair(4, "IV"));
        mp.insert(make_pair(1, "I"));
        for (auto it = mp.rbegin(); it != mp.rend(); it++)
        {
            if (num >= it->first)
            {
                num = num - (it->first);
                s.append(it->second);
            }
        }
        return s;
    }
} R;

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    cout << R.solution(n);
}