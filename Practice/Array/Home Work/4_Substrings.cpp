#include <iostream>
using namespace std;

string SubString(string x)
{
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < (x.size() - i); j++)
        {
            for (int k = i; k <= j + i; k++)
            {
                cout << x[k];
            }
            if (j < (x.size() - i) - 1)
            {
                cout << " ,";
            }
        }
        cout << "\n";
    }
    return 0;
}
int main()
{
    string s;
    cin >> s;
    string z = SubString(s);
    cout << z;
}