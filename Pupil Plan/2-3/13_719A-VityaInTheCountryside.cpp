#include <bits/stdc++.h>
using namespace std;

void fl()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
//   freopen("ot.txt", "w", stdout);
#else
//  freopen("jumping.in", "r", stdin);  // HERE
#endif
}

int main()
{
    fl();
    int n, arr[95] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        switch (arr[0])
        {
        case 15:
            cout << "DOWN";
            break;
        case 0:
            cout << "UP";
            break;

        default:
            cout << -1;
            break;
        }
    }
    else
    {
        if (arr[n - 1] == 15)
        {
            cout << "DOWN";
        }
        else if (arr[n - 1] == 0)
        {
            cout << "UP";
        }
        else
        {
            if (arr[n - 1] > arr[n - 2])
            {
                cout << "UP";
            }
            else
            {
                cout << "DOWN";
            }
        }
    }

    return 0;
}