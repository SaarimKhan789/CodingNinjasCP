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
    int arrival[n];
    int departure[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrival[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> departure[i];
    }

    sort(arrival, arrival + n);
    sort(departure, departure + n);

    int j = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arrival[i] < departure[j])
        {
            ++count;
            continue;
        }

        j++;
    }

    cout << count << endl;
}
