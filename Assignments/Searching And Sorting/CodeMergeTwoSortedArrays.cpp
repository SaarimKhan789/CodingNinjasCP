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

    // ifstream in;
    // in.open("Input.txt");
    // ofstream out;
    // out.open("Output.txt");

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1;
        int *arr1 = new int[n1];

        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }

        cin >> n2;

        int *arr2 = new int[n2];

        for (int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
        }

        int *ans = new int[n1 + n2];

        merge(arr1, n1, arr2, n2, ans);

        for (int i = 0; i < n1 + n2; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
