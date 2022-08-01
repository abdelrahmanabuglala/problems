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
    {
        string s;
        int t, a[6] = {1, 2, 3, 4, 6, 12}, b[6] = {};
        cin >> t;
        while (t--)
        {
            cin >> s;
            int top = -1;
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 12 / a[i]; j++)
                {
                    int count = 0;
                    for (int k = j; k < 12; k += 12 / a[i])
                    {
                        if (s[k] == 'X')
                        {
                            count++;
                        }
                    }
                    if (count == a[i])
                    {
                        b[++top] = a[i];
                        break;
                    }
                }
            }
            cout << top + 1 << " ";
            for (int i = 0; i < top + 1; i++)
            {
                cout << b[i] << "x" << 12 / b[i] << " ";
            }
            cout << endl;
        }

        return 0;
    }
}