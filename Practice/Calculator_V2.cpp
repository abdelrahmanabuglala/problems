#include <iostream>
using namespace std;

void read2Numbers(double &dNum1, double &dNum2)
{
    while (true)
    {
        dNum1 = dNum2 = 0;
        cout << "please enter 2 numbers: ";
        cin >> dNum1 >> dNum2;

        if (cin.fail())
        {
            cout << "you should enter correct values\n\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else
            break;
    }
}
int menu()
{
    int iChoice = 0;

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
        return menu();
    }
    return iChoice;
}

bool sum(double dNum1, double dNum2, double &dResult)
{
    dResult = dNum1 + dNum2;
    return true;
}

bool sub(double dNum1, double dNum2, double &dResult)
{
    dResult = dNum1 - dNum2;
    return true;
}

bool mul(double dNum1, double dNum2, double &dResult)
{
    dResult = dNum1 * dNum2;
    return true;
}

bool div(double dNum1, double dNum2, double &dResult)
{
    if (dNum2 == 0)
    {
        cout << "\t\twe can't divide by zero. retry other 2 numbers\n\n";
        return false;
    }
    else

        dResult = dNum1 / dNum2;
    return true;
}

void runCalculator()
{
    double dNum1 = 0, dNum2 = 0, dResult = 0;
    int iChoice = 0;
    bool bFinshed = false;

    while (!bFinshed)
    {
        read2Numbers(dNum1, dNum2);
        iChoice = menu();

        if (iChoice == 5)
            continue;

        if (iChoice == 1)
            bFinshed = sum(dNum1, dNum2, dResult);

        else if (iChoice == 2)
            bFinshed = sub(dNum1, dNum2, dResult);

        else if (iChoice == 3)
            bFinshed = mul(dNum1, dNum2, dResult);

        else if (iChoice == 4)
            bFinshed = div(dNum1, dNum2, dResult);

        if (bFinshed)
            cout << "\nResult Of Operation: " << dResult << "\n";
    }
}

int main()
{
    cout << "\t\t\t\t**** Welcome To Our Claculator V2 ****\n\n\n\n";
    runCalculator();

    return 0;
}