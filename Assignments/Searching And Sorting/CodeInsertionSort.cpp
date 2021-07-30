#include <bits/stdc++.h>
using namespace std;

int InsertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;

        while (j >= 0 && curr < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = curr;
    }
}

int main()
{

    ifstream in;
    in.open("Input.txt");
    ofstream out;
    out.open("Output.txt");
    int t;
    in >> t;
    while (t--)
    {
        int n;
        in >> n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            in >> arr[i];
        }
        InsertionSort(arr, n);

        for (int i = 0; i < n; i++)
        {
            out << arr[i] << " ";
        }

        out << endl;
    }
    return 0;
}
