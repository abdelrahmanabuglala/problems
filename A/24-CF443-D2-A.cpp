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
    string s;
    set<int> a;
    getline(cin, s);
    for (int i = 1; i < s.length(); i += 3)
    {
        if (isalpha(s[i]))
        {
            a.insert(s[i]);
        }
    }
    cout << a.size();

    return 0;
}