#include<iostream>
using namespace std;

double arth_progression(double a, double d, int n);

double arth_progression(double a, double d, int n)
{
	if (n == 1)
		return a;
	else
	{
		return d + arth_progression(a, d, n - 1);
	}
}

int main()
{
	double c=arth_progression(2.0, 3.0, 4);
	cout << c;
	getchar();
	return 0;
}