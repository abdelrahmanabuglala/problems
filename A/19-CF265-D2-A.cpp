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
    string s1, s2;
    int x = 1, n = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == s1[n])
        {
            x++;
            n++;
        }
    }
    cout << x;

    return 0;
}