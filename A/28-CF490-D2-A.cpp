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
    int n, x, p, arr[4][5001], count[4] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        count[x]++;
        arr[x][count[x]] = i;
    }
    p = min(min(count[1], count[2]), count[3]);
    cout << p << endl;
    for (int i = 1; i <= p; i++)
    {
        cout << arr[1][i] << " " << arr[2][i] << " " << arr[3][i] << endl;
    }

    return 0;
}