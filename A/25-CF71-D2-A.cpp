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
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }

    return 0;
}