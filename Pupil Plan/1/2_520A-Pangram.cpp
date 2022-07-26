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
    int n, x = 0, arr[28] = {};
    string s;
    cin >> n >> s;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a')
            {
                arr['z' - s[i]] = 1;
            }
            else
            {
                arr['Z' - s[i]] = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 1)
            {
                x++;
            }
        }
        if (x != 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }

    return 0;
}