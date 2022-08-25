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
    int x, c = 0;
    cin >> x;
    while (x > 0)
    {
        if ((x & 1) == 1)
        {
            c++;
        }
        x >>= 1;
    }
    cout << c;

    return 0;
}