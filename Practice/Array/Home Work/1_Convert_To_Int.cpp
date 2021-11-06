#include <iostream>
#include <assert.h>
using namespace std;

int ConvertToInt(string x)
{
    int result = 0;
    for (int i = 0; i < x.size(); i++)
        assert(x[i] <= '9' && x[i] >= '0');
    result = x[0] - '0';
    for (int i = 1; i < x.size(); i++)
    {
        result *= 10;
        result += x[i] - '0'; 
    }

    return result;
}

int main()
{
    string s;
    cin >> s;
    int z = ConvertToInt(s);
    cout << z;
}
