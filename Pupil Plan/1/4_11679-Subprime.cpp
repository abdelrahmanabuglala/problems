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
    int b, n, owe, owed, amount, owes[20];
    cin >> b >> n;
    while (b)
    {
        for (int i = 0; i < b; ++i)
        {
            cin >> owes[i];
        }
        while (n--)
        {
            cin >> owe >> owed >> amount;

            owes[owe - 1] -= amount;
            owes[owed - 1] += amount;
        }
        bool positive(true);

        for (int i = 0; i < b; ++i)
        {
            if (owes[i] < 0)
            {
                positive = false;
            }
        }

        if (positive)
            cout << "S\n";
        else
            cout << "N\n";

        cin >> b >> n;
    }

    return 0;
}