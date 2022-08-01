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
    int n, k;
    cin >> n;
    if (n % 2 == 0)
    {
        k = n / 2;
        cout << k << endl;
        for (int i = 0; i < k; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        k = (n - 3) / 2;
        cout << k + 1 << endl;
        for (int i = 0; i < k; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }

    return 0;
}