#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << s[i]<<"  ";
        }
        else
            cout << s[i];
    }
    return 0;
}