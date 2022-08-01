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
    int a, at, b, bt, ts, te, tds, tde, h, m, c = 0;
    char x;
    cin >> a >> at >> b >> bt >> h >> x >> m;
    tds = h * 60 + m;
    tde = tds + at;

    for (int ts = 5 * 60; ts < 24 * 60; ts += b)
    {
        te = ts + bt;
        int x = max(tds, ts), y = min(tde, te);
        if (x < y)
        {
            c++;
        }
    }
    cout << c;

        return 0;
}