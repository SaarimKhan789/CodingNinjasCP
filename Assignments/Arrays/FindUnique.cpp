#include<iostream>
using namespace std;

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
		cin >> n;

		int arr[1000];


		for (int i = 0; i < n; i++) {

			cin >> arr[i];

		}

		bool flag = true;
		int i, j;
		for ( i = 0; i < n; i++) {

			flag = true;

			for ( j = 0;  j < n  ; j++) {

				if (i != j) {

					if (arr[i] == arr[j]) {

						flag = false;
						break;
					}

				}

			}



			if (flag == true) {

				cout << arr[i] << endl;
				break;
			}


		}






	}





}