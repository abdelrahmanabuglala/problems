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
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0)
    {
        if (a == b)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {

        if ((b - a) % c == 0 && (((b - a) / c) >= 0))
        {

            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}