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
    int l;
    cin >> l;
    while (l)
    {
        int a = 0, b = 0, d = 0, c = 3000000;
        string s;
        cin >> s;
        for (int i = 1; i <= l; i++)
        {
            if (s[i - 1] != '.' && s[i - 1] != 'Z')
            {
                if (s[i - 1] == 'R')
                {
                    a = i;
                }
                else
                {
                    b = i;
                }

                if (abs(a - b) < c && a != 0 && b != 0)
                {
                    c = abs(a - b);
                }
            }
            else if (s[i - 1] == 'Z')
            {
                d++;
            }
        }
        if (d > 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << c << "\n";
        }

        cin >> l;
    }

    return 0;
}