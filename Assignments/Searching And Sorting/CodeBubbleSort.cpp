#include <fstream>
#include <math.h>
using namespace std;

void BubbleSort(int *input, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (input[j] > input[j + 1])
            {
                int t = input[j + 1];
                input[j + 1] = input[j];
                input[j] = t;
            }
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

        BubbleSort(arr, n);

        for (int i = 0; i < n; i++)
        {
            out << arr[i] << " ";
        }

        out << endl;
    }
}