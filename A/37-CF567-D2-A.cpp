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
    int arr[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    arr[0] = arr[n];
    arr[n + 1] = arr[1];
    for (int i = 1; i <= n; i++)
    {
        cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << " " << max(abs(arr[i] - arr[n]), abs(arr[i] - arr[1])) << endl;
    }

    return 0;
}