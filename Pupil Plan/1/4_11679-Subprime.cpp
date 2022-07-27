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
    int b, n;
    while (cin >> b >> n && b)
    {
        int x, y, v, arr[21] = {}, a = 0;
        for (int i = 1; i <= b; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y >> v;
            arr[x] -= v;
            arr[y] += v;
        }
        for (int i = 1; i <= b; i++)
        {
            if (arr[i] < 0)
            {
                a++;
            }
        }
        if (a > 0)
        {
            cout << "N\n";
        }
        else
        {
            cout << "S\n";
        }
    }

    return 0;
}