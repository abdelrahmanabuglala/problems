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
    int n, t, k, d, x = 0;
    cin >> n >> t >> k >> d;
    int t1 = ceil((n * 1.0) / (k * 1.0)) * t;
    int t2 = t1 - d;
    puts(t2 > t ? "YES" : "NO");

    return 0;
}