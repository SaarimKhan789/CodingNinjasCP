#include <bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    for (int i = 0; i < size; i++)
    {

        if (i == size - 1)
        {
            return 0;
        }
        if (input[i] > input[i + 1])
        {
            return i + 1;
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
        out << arrayRotateCheck(arr, n) << endl;
    }
    return 0;
}
