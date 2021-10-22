#include <iostream>
using namespace std;

int main()
{
    double dNum1 = 0, dNum2 = 0, dResult = 0;
    int iChoice;

    cout << "Welcome To Our Calculator";
CalculatorStartingPoint:

    cout << "Please Enter 2 Numbers: ";
    cin >> dNum1 >> dNum2;

    if (cin.fail())
    {
        cout << "You Should Enter Correct Values\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto CalculatorStartingPoint;
    }
MenuStartingPoint:

    cout << "\nMenu OPtions: \n";
    cout << "\tTo Sum Numbers Enter 1\n";
    cout << "\tTo Subtract Numbers Enter 2\n";
    cout << "\tTo Multiply Numbers Enter 3\n";
    cout << "\tTo Divide Numbers Enter 4\n";
    cout << "\tTo Enter The 2 Numbers Again 5\n";

    cout << "\n\tEnter The Choice: ";
    cin >> iChoice;

    if (cin.fail())
    {
        cout << "\t\tYou Should Enter Correct Value\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto MenuStartingPoint;
    }

    switch (iChoice)
    {
    case 1:
        dResult = dNum1 + dNum2;
        break;
    case 2:
        dResult = dNum1 - dNum2;
        break;
    case 3:
        dResult = dNum1 * dNum2;
        break;
    case 4:
        if (dNum2 == 0)
        {
            cout << "\t\tWe Can't divide by zero. Retry ohter 2 numbers";
            goto CalculatorStartingPoint;
        }
        dResult = dNum1 / dNum2;

        break;
    case 5:
        goto CalculatorStartingPoint;

        break;

    default:
    cout<<"\t\tChoice must be from 1 to 5. Retry again\n\n";
    goto MenuStartingPoint;
        break;
    }
    cout<<"\nResult of operation: "<<dResult<<"\n";
}