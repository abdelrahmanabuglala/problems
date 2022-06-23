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
    int n, x = 0;
    cin >> n;
    int home[n] = {}, away[n] = {};

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> home[i] >> away[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home[i] == away[j])
            {
                x++;
            }
        }
    }
    cout << x;

    return 0;
}