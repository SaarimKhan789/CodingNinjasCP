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


	for (int i = 2; i <= n; i++) {
		int count = 1;

		for (int k = 2; k <= n; k++) {

			if (i % k == 0) {
				++count;
			}
		}

		if (count == 2) {
			cout << i << endl;
		}
	}

}