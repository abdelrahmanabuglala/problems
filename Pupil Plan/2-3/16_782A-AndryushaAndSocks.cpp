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
    int n, x, c = 0, ans = 0, arr[100005] = {};
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x;
        if (arr[x] == 0)
        {
            c++;
        }
        else
        {
            c--;
        }
        arr[x] = 1;
        ans = max(ans, c);
    }
    cout << ans;
    return 0;
}