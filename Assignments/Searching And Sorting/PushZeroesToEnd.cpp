#include <fstream>
#include <math.h>
#include <climits>
using namespace std;

void pushZeroesEnd(int *arr, int size)
{
    int i = 0;
    int j = 0;

    while (i < size)
    {

        if (arr[i] != 0)
        {

            swap(arr[i], arr[j]);

            i++;
            j++;
        }
        else
        {
            i++;
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

        pushZeroesEnd(arr, n);

        for (int i = 0; i < n; i++)
        {
            out << arr[i] << " ";
        }

        out << endl;
    }
}