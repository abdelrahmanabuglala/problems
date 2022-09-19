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
    int n;
    cin >> n;
    int arr[n], m = n;
    bool vis[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        vis[arr[i]] = 1;
        while (vis[m] && m > 0)
        {
            cout << m << " ";
            m--;
        }
        cout << endl;
    }

    return 0;
}