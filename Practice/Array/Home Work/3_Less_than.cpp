#include <iostream>
#include <assert.h>
using namespace std;

void LessThan(string arra, string arrb)
{
    if (arra.size() < arrb.size())
    {
        cout << "First is less than second";
    }
    else
    {

        for (int i = 0; i < arrb.size(); i++)
        {
            if (arra[i] < arrb[i])
            {
                cout << "First is less than second";
            }
        }
    }
}
int main()
{
    string arr1, arr2;
    cin >> arr1 >> arr2;

    LessThan(arr1, arr2);
}

// assert   automatic test