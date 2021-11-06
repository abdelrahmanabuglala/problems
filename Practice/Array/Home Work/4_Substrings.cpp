#include <iostream>
using namespace std;

string SubString(string x)
{
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < (x.size() - i); j++)
        {
            cout << x[j] << ",";
        }
        cout << "\n"
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