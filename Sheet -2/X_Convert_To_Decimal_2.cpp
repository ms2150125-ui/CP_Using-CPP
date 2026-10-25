
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ones = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                ones++;
            }

            n = n/2;
        }

        int ans = 0;
        int power = 1;

        for (int i = 0; i < ones; i++)
        {
            ans += power;
            power *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}
