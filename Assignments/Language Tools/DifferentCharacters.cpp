#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{

    ifstream cin;
    cin.open("Input.txt");
    ofstream cout;
    cout.open("Output.txt");
    string s;
    getline(cin, s);

    string word = "";
    vector<string> v;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            v.push_back(word);
            word = "";
        }
    }

    v.push_back(word);

    unordered_map<string, int> map;

    for (int i = 0; i < v.size(); i++)
    {
        if (map.find(v[i]) != map.end())
        {
            map[v[i]]++;
        }
        else
        {
            map[v[i]] = 1;
        }
    }

    for (auto i = map.begin(); i != map.end(); i++)
    {

        if (i->second != 1)
        {
            cout << i->first << " " << i->second << endl;
        }
    }
    return 0;
}
