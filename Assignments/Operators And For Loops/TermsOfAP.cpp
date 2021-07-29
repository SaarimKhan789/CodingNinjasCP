#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif
	int x;
	cin >> x;
	int count =	1;
	int n = 1;


	while (count <= x) {

		int term = 3 * n + 2;

		if (term % 4 != 0) {
			cout << term << " ";
			++count;
		}

		n++;
	}

}