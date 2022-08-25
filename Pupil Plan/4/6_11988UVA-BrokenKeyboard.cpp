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
    char line[100001];
    while (scanf("%s", line) != EOF)
    {
        list<char> l;
        int len = strlen(line);
        list<char>::iterator it = l.begin();

        for (int i = 0; i < len; i++)
        {
            if (line[i] == '[')
            {
                it = l.begin();
            }
            else if (line[i] == ']')
            {
                it = l.end();
            }
            else
            {
                l.insert(it, line[i]);
            }
        }
        for (it = l.begin(); it != l.end(); it++)
        {
            printf("%c", *it);
        }
        cout << endl;
    }

    return 0;
}