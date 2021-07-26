#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int n, power;
	cin >> n >> power;
	int res = 1;

	int i = 1;


	while (i <= power) {

		res *= n;

		i++;
	}

	cout << res << endl;


}