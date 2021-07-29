#include<iostream>
#include<math.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif


	long  n;
	cin >> n;

	long  dec = 0, x = 0;

	while (n) {

		int r = n % 2;

		int i = 1;
		long  res = 1;

		while (i <= x) {

			res *= 10;

			i++;
		}

		dec += r * res;

		x++;
		n /= 2;


	}
	cout << dec << endl;
}