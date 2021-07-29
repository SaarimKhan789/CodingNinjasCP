#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	char c;
	c = cin.get();
	int low = 0, dig = 0, whitespaces = 0;

	while (c != '$') {



		if (c >= 'a' && c <= 'z') {
			++low;
		}
		else if (c >= '0' && c <= '9') {
			++dig;
		}
		else {
			++whitespaces;
		}

		c = cin.get();
	}

	cout << low << " " << dig << " " << whitespaces << endl;
}