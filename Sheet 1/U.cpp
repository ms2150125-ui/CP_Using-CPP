#include <bits/stdc++.h>
using namespace std;

int main()
{
	string number;
	cin >> number;

	size_t decimalPoint = number.find('.');
	string integerPart = number.substr(0, decimalPoint);

	if (decimalPoint == string::npos ||
		number.substr(decimalPoint + 1).find_first_not_of('0') == string::npos)
	{
		cout << "int " << integerPart;
	}
	else
	{
		cout << "float " << integerPart << ' '
				 << "0." << number.substr(decimalPoint + 1);
	}

	return 0;
}
