#include<iostream>
#include<math.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int ba;
	char grade;

	cin >> ba >> grade;
	double hra, da, allow, pf;

	hra = 0.20 * ba;
	da = 0.50 * ba;

	if (grade == 'A') {
		allow = 1700;
	}
	else if (grade == 'B') {
		allow = 1500;
	}
	else {
		allow = 1300;
	}

	pf = 0.11 * ba;

	double totalSalary = (ba + hra + da + allow) - pf;

	int salary = round(totalSalary);

	cout << salary << endl;



}