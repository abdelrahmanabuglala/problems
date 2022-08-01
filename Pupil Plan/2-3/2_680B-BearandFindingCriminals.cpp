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
    int n, a, c = 0, arr[101] = {};
    cin >> n >> a;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            int b = abs(i - a);
            if ((a + b <= n and arr[a + b] == 1) || (a - b >= 1 and arr[a - b] == 1))
            {
                c--;
            }
        }
        else
        {
            c++;
        }
    }

    cout << c;

    return 0;
}