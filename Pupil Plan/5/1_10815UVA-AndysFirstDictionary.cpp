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
    string line, word = "";
    set<string> st;
    while (getline(cin, line))
    {
        line += ' ';
        for (int i = 0; i < line.length(); i++)
        {
            if (isalpha(line[i]))
            {
                line[i] = tolower(line[i]);
            }
            else
            {
                line[i] = ' ';
            }
            if (isalpha(line[i]))
            {
                word += line[i];
            }
            else
            {
                if (word != "")
                {
                    st.insert(word);
                    word = "";
                }
            }
        }
    }
    for (auto i = st.begin(); i != st.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}