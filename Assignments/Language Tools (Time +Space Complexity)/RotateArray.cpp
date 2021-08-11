#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int i, int j)
{

    while (i < j)
    {

        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
}
void rotate(int *arr, int d, int n)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
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

        int d;
        cin >> d;

        rotate(arr, d, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    }
    return 0;
}
