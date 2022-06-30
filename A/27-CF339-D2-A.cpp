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
    int a = 0, b = 0, c = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            a++;
        }
        else if (s[i] == '2')
        {
            b++;
        }
        else if (s[i] == '3')
        {
            c++;
        }
    }
    while (a > 0)
    {
        if (a > 1 || b > 0 || c > 0)
        {
            cout << "1+";
        }
        else
        {
            cout << "1";
        }

        a--;
    }
    while (b > 0)
    {
        if (b > 1 || c > 0)
        {
            cout << "2+";
        }
        else
        {
            cout << "2";
        }
        b--;
    }
    while (c > 0)
    {
        if (c > 1)
        {
            cout << "3+";
        }
        else
        {
            cout << "3";
        }
        c--;
    }

    return 0;
}