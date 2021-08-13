#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(ll *arr, int lo, int mid, int hi)
{

    int i = lo, j = mid, k = 0;
    int temp[hi - lo + 1];
    ll count = 0;

    while (i < mid && j <= hi)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            count += mid - i;
        }
    }

    while (i < mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= hi)
    {
        temp[k++] = arr[j++];
    }

    for (int i = lo, k = 0; i <= hi; i++, k++)
    {

        arr[i] = temp[k];
    }

    return count;
}

ll mergeSort(ll *arr, int lo, int hi)
{

    ll count = 0;
    if (hi > lo)
    {
        int mid = lo + (hi - lo) / 2;

        ll leftcount = mergeSort(arr, lo, mid);
        ll rightcount = mergeSort(arr, mid + 1, hi);
        ll mycount = merge(arr, lo, mid + 1, hi);
        count = mycount + leftcount + rightcount;
    }

    return count;
}

ll getInversions(ll *arr, int n)
{

    ll ans = mergeSort(arr, 0, n - 1);

    return ans;
}
int main()
{
    int n;
    cin >> n;

    ll *arr = new ll[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << getInversions(arr, n);

    delete[] arr;
}