#include<iostream>
using namespace std;

int main()
{


#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int n, c;
	cin >> n >> c;
	if (c == 1) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		cout << sum << endl;
	}
	else if (c == 2) {

		int product = 1;

		for (int i = 1; i <= n; i++) {
			product *= i;
		}
		cout << product << endl;
	}

	else {
		cout << -1 << endl;
	}
}