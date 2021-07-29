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
	int even = 0, odd = 0;

	while (n != 0) {
		int r = n % 10;

		if (r % 2 == 0) {
			even += r;
		}
		else {
			odd += r;
		}

		n = n / 10;
	}

	cout << even << " " << odd << endl;
}