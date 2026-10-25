#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter Your year:- ";
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {

            if (year % 400 == 0)
            {
                cout << year << " is a leap year.";
            }
            else
            {
                cout << year << " is not leap year.";
            }
        }
        else
        {
            cout << year << " is a leap year.";
        }
    }
    else
    {
        cout << year << " is not leap year. ";
    }
    return 0;
}
