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
    int l, a = 0, b = 0, c = abs(a - b);
    ;
    string s;
    cin >> l;
    while (l)
    {
        cin >> s;
        for (int i = 1; i <= l; i++)
        {
            if (s[i - 1] != '.' || 'Z')
            {
                if (s[i - 1] == 'R')
                {
                    a = i;
                }
                else
                {
                    b = i;
                }

                if (abs(a - b) < c || c != 0)
                {
                    c = abs(a - b);
                }
            }
            else if (s[i - 1] == 'Z')
            {
                c = 0;
            }
        }
        cout << c << "\n";
        cin >> l;
    }

    return 0;
}