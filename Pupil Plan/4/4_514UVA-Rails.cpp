
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
    int n, arr[1005] = {};

    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        while (1)
        {
            cin >> arr[0];
            if (arr[0] == 0)
            {
                cout << endl;
                break;
            }
            for (int i = 1; i < n; i++)
            {
                cin >> arr[i];
            }
            stack<int> s;
            int idx = 0;
            for (int i = 1; i <= n; i++)
            {
                s.push(i);
                while (!s.empty() && s.top() == arr[idx])
                {
                    s.pop();
                    idx++;
                    if (idx >= n)
                    {
                        break;
                    }
                }
            }
            if (s.empty())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}