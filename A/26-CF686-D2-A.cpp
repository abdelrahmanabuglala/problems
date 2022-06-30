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
    int n, d = 0, arr[1001] = {};
    long long x;
    char arrc[1001];
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arrc[i] >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arrc[i] == '+')
        {
            x += arr[i];
        }
        else
        {
            if (x >= arr[i])
            {
                x -= arr[i];
            }
            else
            {
                d++;
            }
        }
    }
    cout << x << " " << d;

    return 0;
}