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
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "-1";
    }
    else
    {
        cout << (max(s1.size(), s2.size()));
    }

    return 0;
}