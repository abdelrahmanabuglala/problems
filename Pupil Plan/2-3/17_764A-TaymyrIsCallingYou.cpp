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
    int n, m, z, x, c = 0;
    cin >> n >> m >> z;
    x = m;

    while (x <= z && n <= z)
    {
        if (x % n == 0)
        {
            c++;
        }
        x += m;
    }

    cout << c;

    return 0;
}