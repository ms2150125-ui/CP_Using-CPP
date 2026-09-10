#include <bits/stdc++.h>
using namespace std;

int main()
{
	array<int, 3> values;
	cin >> values[0] >> values[1] >> values[2];

	array<int, 3> sortedValues = values;
	sort(sortedValues.begin(), sortedValues.end());

	for (int value : sortedValues)
		cout << value << '\n';

	cout << '\n';

	for (int value : values)
		cout << value << '\n';

	return 0;
}
