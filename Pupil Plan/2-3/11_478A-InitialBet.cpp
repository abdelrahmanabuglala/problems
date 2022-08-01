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
    int x, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        sum += x;
    }
    if (sum % 5 != 0 || sum == 0)
    {

        cout << -1;
    }
    else
    {
        cout << sum / 5;
    }

    return 0;
}