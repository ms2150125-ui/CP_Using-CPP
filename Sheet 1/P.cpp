#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;

    long long first = a / 1000;

    if(first % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}