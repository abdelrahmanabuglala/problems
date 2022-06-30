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
    int n, t, k, d, t1, t2;
    cin >> n >> t >> k >> d;
    if (n % k == 0)
    {
        t1 = n / k * t;
    }
    else
    {
        t1 = n / k;
        t1++;
        t1 *= t;
    }
    t2 = d + t;
    if (t1 <= t2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}