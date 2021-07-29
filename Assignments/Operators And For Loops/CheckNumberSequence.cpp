#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int n, prev, curr;
	cin >> n;
	cin >> prev;
	int i = 1;
	bool isDec = true;

	while (i <= n - 1) {

		cin >> curr;

		if (curr < prev) {

			if (isDec == false) {
				cout << "false" << endl;
				return 0;
			}

		}
		else if (curr == prev) {

			cout << "false" << endl;
			return 0;
		}
		else {

			if (isDec == true) {
				isDec = false ;
			}
		}

		prev = curr;

		i++;
	}

	cout << "true" << endl;
}