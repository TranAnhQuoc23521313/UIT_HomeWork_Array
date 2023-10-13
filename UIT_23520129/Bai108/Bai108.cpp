#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int ucln(int, int);
int TimUCLN(int[], int);
int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}
int TimUCLN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = ucln(lc, a[i]);
	return lc;
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TimUCLN(b, n);
	return 0;
}