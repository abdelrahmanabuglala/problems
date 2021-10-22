#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int a = 0; a < 100; a++)
    {
        for (int b = 0; b < 100; b++)
        {
            for (int c = 0; c < 100; c++)
            {
                for (int d = 0; d < 100; d++)
                {
                    if (a + b + c + d == 100)
                    {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
}