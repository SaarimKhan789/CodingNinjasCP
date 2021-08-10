#include <bits/stdc++.h>
using namespace std;
string uniqueChar(string str)
{

    bool vis[122] = {false};
    string s = "";

    for (int i = 0; i < str.length(); i++)
    {

        if (!vis[str[i] - 'a'])
        {
            vis[str[i] - 'a'] = true;
            s += str[i];
        }
    }

    return s;
}
int main()
{

    ifstream cin;
    cin.open("Input.txt");
    ofstream cout;
    cout.open("Output.txt");
    string s;
    cin >> s;
    cout << uniqueChar(s) << endl;
    return 0;
}
