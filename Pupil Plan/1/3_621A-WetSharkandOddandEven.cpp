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
    long long int sum = 0, num, smallest_odd_number = 1e9 + 5;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
        if (num < smallest_odd_number && num % 2 != 0)
        {
            smallest_odd_number = num;
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        cout << sum - smallest_odd_number;
    }

    return 0;
}