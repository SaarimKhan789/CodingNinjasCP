#include<iostream>
#include<math.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int dec = 0, x = 0;

	while (n) {

		int r = n % 10;
		dec += r * (int)pow(2, x++);
		n /= 10;
	}

	cout << dec;

}