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
    int x, y = 0, arrl[5] = {}, arrs[5] = {}, arrr[5] = {}, arrp[5] = {};
    for (int i = 1; i < 5; i++)
    {
        cin >> arrl[i] >> arrs[i] >> arrr[i] >> arrp[i];
    }
    for (int i = 1; i < 5; i++)
    {
        if (arrl[i] == 1)
        {
            if (i - 1 < 1)
            {
                x = 4;
            }
            else
            {
                x = i - 1;
            }
            if (arrp[i] == 1 || arrp[x] == 1)
            {
                y++;
            }
        }
        if (arrs[i] == 1)
        {
            if (i + 2 > 4)
            {
                x = i - 2;
            }
            else
            {
                x = i + 2;
            }
            if (arrp[i] == 1 || arrp[x] == 1)
            {
                y++;
            }
        }
        if (arrr[i] == 1)
        {
            if (i + 1 > 4)
            {
                x = 1;
            }
            else
            {
                x = i + 1;
            }
            if (arrp[i] == 1 || arrp[x] == 1)
            {
                y++;
            }
        }
    }
    if (y > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}