#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{

    vector<pair<int, int>> ans;
    int maxlength = 0;

    unordered_map<int, bool> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]] = true;
    }
    int start = 0;

    for (int i = 0; i < n; i++)
    {

        int currstart = 0;
        int length = 1;

        if (map[arr[i]])
        {

            map[arr[i]] = false;

            int pos = arr[i];

            while (map[pos + 1])
            {

                map[pos + 1] = false;
                length++;
                pos++;
            }

            currstart = arr[i];
            pos = arr[i];

            while (map[pos - 1])
            {

                map[pos - 1] = false;
                currstart--;
                length++;
                pos--;
            }
        }

        if (length >= maxlength)
        {

            maxlength = length;
            start = currstart;

            pair<int, int> p;

            p.first = start;
            p.second = maxlength;

            ans.push_back(p);
        }
    }

    for (int i = 0; i < n; i++)
    {

        int startele = arr[i];

        for (int j = 0; j < ans.size(); j++)
        {

            if (startele == ans[j].first && maxlength == ans[j].second)
            {

                vector<int> temp;

                for (int k = startele; k < startele + maxlength; k++)
                {
                    temp.push_back(k);
                }

                return temp;
            }
        }
    }
}
int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    cout << ans[0];
    if (ans.size() > 1)
    {
        cout << " " << ans[ans.size() - 1];
    }

    delete[] arr;
}