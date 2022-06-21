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
    int x, y, z = 1;
    cin >> x >> y;
    int s = x;
    while (x % 10 != 0 && (x - y) % 10 != 0)
    {
        z++;
        x += s;
    }
    cout << z;
    return 0;
}