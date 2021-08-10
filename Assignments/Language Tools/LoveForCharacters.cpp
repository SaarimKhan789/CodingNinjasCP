#include <bits/stdc++.h>
using namespace std;

int main()
{

    ifstream cin;
    cin.open("Input.txt");
    ofstream cout;
    cout.open("Output.txt");
    int n;
    cin >> n;
    char str[n];
    cin >> str;

    int a = count(str, str + n, 'a');
    int s = count(str, str + n, 's');
    int p = count(str, str + n, 'p');

    cout << a << " " << s << " " << p << endl;

    return 0;
}
