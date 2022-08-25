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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, ans;
        stack<char> stack;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '(')
            {
                if (isalpha(s[i]))
                {
                    ans += s[i];
                }
                else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
                {
                    stack.push(s[i]);
                }
                else if (s[i] == ')')
                {
                    ans += stack.top();
                    stack.pop();
                }
            }
                }
        cout << ans << endl;
    }

    return 0;
}