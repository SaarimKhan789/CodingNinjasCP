#include <fstream>
#include <math.h>
using namespace std;
int BinarySearch(int *input, int n, int val)
{
    int lo = 0;
    int hi = n - 1;

    while (lo <= hi)
    {

        int mid = (lo + hi) / 2;

        if (input[mid] == val)
        {
            return mid;
        }
        else if (input[mid] > val)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    return -1;
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

        int val = 0;
        in >> val;

        out << BinarySearch(arr, n, val) << endl;
    }
}