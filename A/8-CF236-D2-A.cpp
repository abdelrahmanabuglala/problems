#include <iostream>
#include <algorithm>
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
    int counter = 0;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] != s[i + 1])
        {
            counter++;
        }
    }

    if (counter % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}