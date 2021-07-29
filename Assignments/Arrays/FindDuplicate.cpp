#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif
	int n;
	int t;

	cin >> t;

	while (t--) {

		cin >> n;

		int arr[1000];
		for (int i = 0; i < n; i++) {

			cin >> arr[i];
		}

		int original_sum = 0;

		int currsum = 0;

		for (int i = 0; i < n; i++) {

			currsum += arr[i];

		}

		for (int i = 0; i <= n - 2; i++) {

			original_sum += i;

		}

		int duplicate = currsum - original_sum;

		cout << currsum << endl;
		cout << original_sum << endl;

		cout << duplicate << endl;

	}



}