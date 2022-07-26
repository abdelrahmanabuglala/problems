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
    unsigned int x = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unsigned int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
        if (sum % 2 == 0)
        {
            x = sum;
        }
    }
    if (x == 0)
    {
        if (arr[0] % 2 == 0)
        {
            cout << arr[0];
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        cout << x;
    }

    return 0;
}