#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
    int res = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (i + 1 >= arr[i])
        {
            res = i + 1;
        }
    }

    return ++res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(arr, n) << endl;
    }
    return 0;
}