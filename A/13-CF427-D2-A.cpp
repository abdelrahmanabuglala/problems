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
    int n, x, s = 0, p = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            s += x;
        }
        else
        {
            if (s > 0)
            {
                s--;
            }
            else
            {
                p++;
            }
        }
    }
    cout << p;
    return 0;
}