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
    int n, m, x, y, arr[105] = {};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        arr[x + 1] += (arr[x] - y);
        arr[x - 1] += (y - 1);
        arr[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}