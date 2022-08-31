#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    int j, max, points = 0;

    for (int i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
                max = arr[i + j];
            points = points + max;
        }
    }
    cout << points;
}

int main()
{
    cout << "Enter the number of buildings";

    int n;
    cin >> n;

    // Dynamic memory allocation is just a lifesaver
    int *arr = (int *) malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int f = n / sizeof(arr[0]);
    int k;
    cin >> k;
    printKMax(arr, n, k);
    return 0;
}
