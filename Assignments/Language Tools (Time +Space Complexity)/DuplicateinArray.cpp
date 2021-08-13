#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int findDuplicate(int *arr, int n)
{

    int total = 0;
    int currsum = 0;

    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        currsum += *i;
    }

    return total - currsum;
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
        cout << findDuplicate(arr, n) << endl;

        delete[] arr;
    }
    return 0;
}
