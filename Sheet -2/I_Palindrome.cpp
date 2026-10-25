
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << reversed << '\n';

    if (original == reversed)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}
