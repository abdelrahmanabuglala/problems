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
    string y;
    cin >> n;
    getline(cin, y);
    while (n)
    {

        int count[n + 1] = {}, x = 0;
        for (int i = 0; i < n; i++)
        {
            string s;

            getline(cin, s);

            for (int j = 0; j < 25; j++)
            {

                if (s[j] == ' ')

                {
                    count[i]++;
                }
            }
        }
        sort(count, count + n);
        for (int i = 1; i < n; i++)
        {
            if (count[i] > count[0])
            {
                x += count[i] - count[0];
            }
        }
        cout << x << endl;
        cin >> n;
        getline(cin, y);
    }

    return 0;
}