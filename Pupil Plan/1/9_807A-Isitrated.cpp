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
    int n, arr[1002][2] = {}, rated = 0, unrated = 0, maybe = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] != arr[i][1])
        {
            rated++;
        }
        else if (arr[i][0] == arr[i][1] && arr[i][0] >= arr[i + 1][0])
        {
            maybe++;
        }
        else
        {
            unrated++;
        }
    }
    if (rated > 0)
    {
        cout << "rated";
    }
    else if (unrated > 0)
    {
        cout << "unrated";
    }
    else
    {
        cout << "maybe";
    }

    return 0;
}