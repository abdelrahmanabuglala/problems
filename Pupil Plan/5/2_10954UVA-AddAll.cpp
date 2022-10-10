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
    while (n)
    {
        priority_queue<int, vector<int>, greater<int>> q;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        int sum = 0, tot = 0;
        while (q.size() > 1)
        {
            sum = q.top();
            q.pop();
            sum += q.top();
            q.pop();
            tot += sum;
            q.push(sum);
        }
        cout << tot << endl;
        cin >> n;
    }

    return 0;
}