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
    int x = 0;
    char a = 'a';
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int w = s[i] - a;
        int n = a - s[i];
        if (w < 0)
        {
            w += 26;
        }
        else if (n < 0)
        {
            n += 26;
        }

        if (w > n)
        {
            x += n;
        }
        else
        {
            x += w;
        }
        a = s[i];
    }
    cout << x;

    return 0;
}