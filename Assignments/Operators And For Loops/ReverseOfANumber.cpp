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

	int rev = 0;

	while (n) {
		int r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}

	cout << rev << endl;

}