#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

class roman_to_integer
{
public:
    int sum = 0;
    int num;

    int romanToInt(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (roman(s[i]) >= roman(s[i + 1]))
            {
                num = roman(s[i + 1]);
            }
            else
            {
                num = roman(s[i + 1]) - roman(s[i]);
            }
            sum = sum + num;
        }
        return sum;
    }

    int roman(char st)
    {
        int n;
        if (st == 'V')
        {
            n = 5;
        }
        else if (st == 'L')
        {
            n = 50;
        }
        else if (st == 'I')
        {
            n = 1;
        }
        else if (st == 'X')
        {
            n = 10;
        }
        else if (st == 'C')
        {
            n = 100;
        }
        else if (st == 'D')
        {
            n = 500;
        }
        else if (st == 'M')
        {
            n = 1000;
        }
        else
        {
            exit(0);
        }
        return n;
    }
} R;

int main()
{
    string sm;
    // roman_to_integer r;

    cout << "Enter the string" << endl;
    getline(cin, sm);
    int f = R.romanToInt(sm);
    cout << f << endl;
    return 0;
}