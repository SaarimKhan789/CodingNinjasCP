#include <fstream>
#include <math.h>
using namespace std;

int main()
{

	ifstream in;
	in.open("Input.txt");
	ofstream out;
	out.open("Output.txt");

	int n;
	in >> n;

	int dec = 0, x = 0;

	while (n)
	{

		int r = n % 10;
		dec += r * (int)pow(2, x++);
		n /= 10;
	}

	out << dec;
}