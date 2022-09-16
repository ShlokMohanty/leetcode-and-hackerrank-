#include <bits/stdc++.h>

int processArray(std::vector<int> &array)
{
    /*
     * Do not make any changes outside this function.
     *
     * Modify this function to process `array` as indicated
     * in the question. At the end, return the length of the
     * array.
     *
     * Do not print anything in this function
     * Do not write anything to the standard output
     *
     * Submit this entire program (not just this function)
     * as your answer
     */

    std::vector<int>::iterator i;
    for (i = array.begin(); i != array.end() - 1; i++) {
        if (*i < 10 && *(i + 1) < 10) {
            std::vector<int>::iterator j = i;

            while(*(++j) < 10) {
                *i = *j;
                array.erase(j--);
            }

            i--;
        }
    }

    return array.size();
}

int main(void)
{
    std::vector<int> array;
    int val;
    while (std::cin >> val)
    {
        if (val < 0)
            break;
        array.push_back(val);
    }
    int new_len = processArray(array);
    for (std::vector<int>::iterator a = array.begin(); a != array.end(); a++)
    {
        std::cout << *a << std::endl;
    }
    return 0;
}
