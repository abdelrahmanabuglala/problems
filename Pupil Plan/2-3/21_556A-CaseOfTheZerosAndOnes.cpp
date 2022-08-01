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
    int n, c = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    cout << abs(c);

    return 0;
}