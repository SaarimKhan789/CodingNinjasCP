#include <fstream>
#include <math.h>
#include <climits>
using namespace std;

int findSecondLargest(int *arr, int n)
{
    if (n <= 1)
    {
        return -2147483648;
    }

    else
    {

        int count = 1;
        int val = arr[0];
        for (int i = 1; i < n; i++)
        {

            if (arr[i] == val)
            {
                ++count;
            }
        }

        if (count == n)
        {
            return -2147483648;
        }
        else
        {

            int lar = INT_MIN;
            int seclar = INT_MIN;

            for (int i = 0; i < n; i++)
            {

                if (arr[i] > lar)
                {

                    seclar = lar;

                    lar = arr[i];
                }
                else
                {

                    if (arr[i] > seclar && arr[i] != lar)
                    {
                        seclar = arr[i];
                    }
                }
            }

            return seclar;
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

        out << findSecondLargest(arr, n) << endl;
    }
}