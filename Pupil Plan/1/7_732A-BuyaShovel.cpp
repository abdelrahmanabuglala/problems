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
    int k, r, x = 1;
    cin >> k >> r;
    int y = k;
    while (y % 10 != 0 && (y - r) % 10 != 0)
    {
        x++;
        y += k;
    }
    cout << x;

    return 0;
}