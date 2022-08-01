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
    string s, x;
    int a = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            x.push_back(s[i]);
            a = 0;
        }
        else if (s[i] == ' ' && a == 0)
        {
            x.push_back(s[i]);
            a = 1;
        }
        else if (s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == ';' || s[i] == ':' || s[i] == '"' || s[i] == '!')
        {
            if (a == 1)
            {
                x.pop_back();
            }
            x.push_back(s[i]);
            x.push_back(' ');
            a = 1;
        }
    }
    cout << x;

    return 0;
}