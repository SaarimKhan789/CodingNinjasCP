#include <bits/stdc++.h>
using namespace std;

#include <unordered_map>

int findUnique(int *arr, int n)
{

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (auto i = map.begin(); i != map.end(); i++)
    {

        if (i->second == 1)
        {
            return i->first;
        }
    }
}
int main()
{

    ifstream cin;
    cin.open("Input.txt");
    ofstream cout;
    cout.open("Output.txt");
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findUnique(arr, n);

        delete[] arr;
    }
    return 0;
}
