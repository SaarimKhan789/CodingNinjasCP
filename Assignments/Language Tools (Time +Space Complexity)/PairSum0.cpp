#include <bits/stdc++.h>
using namespace std;

#include <unordered_map>

int pairSum(int *arr, int n)
{

    unordered_map<int, int> map;
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (map.find(-arr[i]) == map.end())
        {

            map[arr[i]]++;
        }
        else
        {

            count += map[-arr[i]];
            map[arr[i]]++;
        }
    }

    return count;
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
        cout << pairSum(arr, n);

        delete[] arr;
    }
    return 0;
}
