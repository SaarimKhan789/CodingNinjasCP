#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char str[])
{

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        ++len;
    }

    int lo = 0;
    int hi = len - 1;

    while (lo < hi)
    {
        if (str[lo] != str[hi])
        {
            return false;
        }
        lo++;
        hi--;
    }

    return true;
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
        int size = 1e6;
        char str[size];
        in >> str;
        cout << (checkPalindrome(str) ? "true" : "false");
    }
    return 0;
}
