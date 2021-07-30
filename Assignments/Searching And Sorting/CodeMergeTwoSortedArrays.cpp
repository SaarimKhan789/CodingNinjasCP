#include <bits/stdc++.h>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {

        if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < size1)
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        ans[k] = arr2[j];
        j++;
        k++;
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
        int n1, n2;
        in >> n1;
        int *arr1 = new int[n1];

        for (int i = 0; i < n1; i++)
        {
            in >> arr1[i];
        }

        in >> n2;

        int *arr2 = new int[n2];

        for (int i = 0; i < n2; i++)
        {
            in >> arr2[i];
        }

        int *ans = new int[n1 + n2];

        merge(arr1, n1, arr2, n2, ans);

        for (int i = 0; i < n1 + n2; i++)
        {
            out << ans[i] << " ";
        }
        out << endl;
    }
    return 0;
}
