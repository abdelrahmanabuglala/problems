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
    int n, arr[1005] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (arr[0] == 1)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }

    return 0;
}