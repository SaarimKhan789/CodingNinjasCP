#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int nz = 0, nt = n - 1;
    int i = 0;
    while (i <= nt)
    {
        if (arr[i] == 1)
        {
            i++;
        }
        else if (arr[i] == 0)
        {

            swap(arr[i], arr[nz]);
            i++;
            nz++;
        }
        else
        {
            swap(arr[i], arr[nt]);
            nt--;
        }
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
        sort012(arr, n);
        for (int i = 0; i < n; i++)
        {
            out << arr[i] << " ";
        }
        out << endl;
    }
    return 0;
}
