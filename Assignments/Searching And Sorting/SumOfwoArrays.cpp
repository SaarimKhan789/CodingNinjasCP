#include <bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *output)
{

    int i = size1 - 1, j = size2 - 1, k = max(size1, size2);
    int carry = 0, sum = 0;

    while (k >= 0)
    {

        sum = carry;

        if (i >= 0)
        {
            sum += arr1[i];
        }

        if (j >= 0)
        {
            sum += arr2[j];
        }

        carry = sum / 10;
        sum = sum % 10;

        output[k] = sum;

        i--;
        j--;
        k--;
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
        int n1;
        in >> n1;
        int *arr1 = new int[n1];
        for (int i = 0; i < n1; i++)
        {
            in >> arr1[i];
        }
        int n2;
        in >> n2;
        int *arr2 = new int[n2];
        for (int i = 0; i < n2; i++)
        {
            in >> arr2[i];
        }
        int size = max(n1, n2) + 1;
        int *output = new int[size];
        sumOfTwoArrays(arr1, n1, arr2, n2, output);

        for (int i = 0; i < size; i++)
        {
            out << output[i] << " ";
        }
        out << endl;
    }
    return 0;
}
