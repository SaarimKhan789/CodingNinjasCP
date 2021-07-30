#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int d, int n)
{

    int lo = d;
    int hi = n - 1;

    while (lo <= hi)
    {

        swap(arr[lo], arr[hi]);
        lo++;
        hi--;
    }
}

void rotate(int *input, int d, int n)
{
    reverse(input, 0, d);
    reverse(input, d, n);
    reverse(input, 0, n);
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
        int d;
        in >> d;
        rotate(arr, d, n);

        for (int i = 0; i < n; i++)
        {
            out << arr[i] << " ";
        }
        out << endl;
    }
    return 0;
}
