#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a = 1, b = 1, c = 0;

	if (n == 1 || n == 2) {

		cout << 1 << endl;

		return 0;
	}

	for (int i = 3; i <= n; i++) {

		c = a + b;

		a = b;
		b = c;
	}

	cout << c << endl;
}