#include <iostream>
using namespace std;

int solve(int n, int m, int k)
{
    if (n / k >= m)
    {
        return m;
    }
    int jokers = n / k;
    m = m - jokers;
    m = (m + k - 2) / (k - 1);

    return jokers - m;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        cout << solve(n, m, k) << endl;
    }
    return 0;
}