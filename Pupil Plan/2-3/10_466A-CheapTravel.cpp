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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        cout << n * a;
    }
    else
    {
        cout << (n / m) * b + min((n % m) * a, b);
    }

    return 0;
}