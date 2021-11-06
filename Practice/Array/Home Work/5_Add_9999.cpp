#include <iostream>
using namespace std;

string Add9999(string x)
{
    if (x.size() >= 5)
    {
        x[x.size() - 1] -= 1;
        x[x.size() - 5] += 1;
        cout << x;
    }
    else if (x == "0")
    {
        cout << "9999";
    }

    else
    {
        string res = "1";
        int n = 4 - x.size();
        for (int i = 0; i < n; i++)
        {
            res += "0";
        }
        res += x;
        res[res.size() - 1] -= 1;
        cout << res;
    }
    return 0;
}
int main()
{
    string s = "0", y = "0";
    cout << s[s.size() - 5];
    cin >> s;
    y = Add9999(s);
}