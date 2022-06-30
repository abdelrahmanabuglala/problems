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
    int n, b, d, x, s = 0;
    cin >> n >> b >> d;
    int z = d;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x <= b && z >= 0)
        {
            z -= x;
        }
        if (z < 0)
        {
            s++;
            z = d;
        }
    }
    cout << s;

    return 0;
}