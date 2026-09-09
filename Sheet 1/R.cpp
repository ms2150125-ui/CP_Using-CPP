#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;

    long long years = n / 365;
    n %= 365;
    long long months = n / 30;
    long long days = n % 30;

    cout << years << " years" <<endl << months << " months" << endl << days << " days";
    return 0;
}
