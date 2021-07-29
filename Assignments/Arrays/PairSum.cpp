#include<iostream>
using namespace std;

int pairSum(int input[], int size, int x) {
	int count = 0;
	for (int i = 0; i < size; i++) {

		for (int j = i + 1; j < size; j++) {



			if (input[i] + input[j] == x) {


				++count;
			}



		}
	}

	return count;

}
int main()
{

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n ;

		int arr[1000];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int x;
		cin >> x;

		cout << pairSum(arr, n, x) << endl;
	}
}