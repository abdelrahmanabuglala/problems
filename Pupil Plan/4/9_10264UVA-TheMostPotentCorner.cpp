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
    while (scanf("%d", &n) != EOF)
    {
        int weights[32770] = {}, potency[32770] = {}, x = 0;
        for (int i = 0; i < 1 << n; i++)
        {
            cin >> weights[i];
        }
        for (int i = 0; i < 1 << n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                potency[i] += weights[i ^ (1 << j)];
            }
        }
        for (int i = 0; i < 1 << n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x = max(x, potency[i] + potency[i ^ (1 << j)]);
            }
        }

        cout << x << endl;
    }

    return 0;
}