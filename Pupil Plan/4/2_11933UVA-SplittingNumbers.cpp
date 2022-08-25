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
    int x;
    cin >> x;
    while (x)
    {
        int a = 0, b = 0;
        if (x == 0)
            break;

        bool turn = true;
        for (int i = 0; i < 32; i++)
            if (((1 << i) & x) != 0)
            {
                if (turn)
                    a |= 1 << i;
                else
                    b |= 1 << i;
                turn = !turn;
            }
        cout << a << " " << b << endl;
        cin >> x;
    }

    return 0;
}