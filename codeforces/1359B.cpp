#include <iostream>
using namespace std;

int solve(char arr[][1000], int n, int m, int x, int y, bool costly)
{
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (costly == false)
            {
                if (arr[i][j] == '.')
                {
                    cost += x;
                }
            }
            else
            {
                if (arr[i][j] == '.')
                {
                    if (j + 1 < m && arr[i][j + 1] == '.')
                    {
                        cost += y;
                        j++;
                    }
                    else
                    {
                        cost += x;
                    }
                }
            }
        }
    }
    return cost;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        bool costly = false;
        if (2 * x > y)
        {
            costly = true;
        }

        char arr[100][1000];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << solve(arr, n, m, x, y, costly) << endl;
    }
    return 0;
}