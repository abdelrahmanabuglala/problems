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
    int n, x, c = 0;
    cin >> n >> x;

    for (int i = n; i > 0; i--)
    {
        if (x % i == 0 && x / i <= n)
        {
            c++;
        }
    }

    cout << c;

    return 0;
}