#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	if (n % 2 == 1)
	{
		cout << -1 << endl;
		return 0;
	}
	else
	{
		for (int i = 2; i <= n; i += 2)
		{
			cout << i << " " << i - 1 << " ";
		}
	}
	cout << endl;
	return 0;
}
