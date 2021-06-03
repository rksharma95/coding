#include <iostream>
using namespace std;

long long solve(int n)
{
    long long res = 0, m;

    m = n / 2 * 1ll;

    res = (m * (m + 1) * n) / 6;

    return res * 8;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << solve(n) << endl;
    }
    return 0;
}