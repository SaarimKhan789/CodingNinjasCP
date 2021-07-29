#include<iostream>
#include<climits>

using namespace std;

void intersection(int input1[], int input2[], int size1, int size2) {

	for (int i = 0; i < size1; i++) {

		for (int j = 0; j < size2; j++) {

			if (input1[i] == input2[j]) {

				cout << input1[i] << " ";

				input2[j] = INT_MIN;
				break;

			}
		}
	}
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

		int n1, n2;
		cin >> n1 ;

		int arr1[1000], arr2[1000];

		for (int i = 0; i < n1; i++) {
			cin >> arr1[i];
		}
		cin >> n2;

		for (int j = 0; j < n2; j++) {
			cin >> arr2[j];
		}

		intersection(arr1, arr2, n1, n2);


		cout << endl;
	}
}