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
    int a, b, c, d;
    cin >> a >> b;
    if (a > b)
    {
        c = 7 - a;
    }
    else
    {
        c = 7 - b;
    }
    d = __gcd(c, 6);
    cout << c / d << "/" << 6 / d;

    return 0;
}