#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float TimX(float[], int);
float TimX(float a[], int n)
{
	float lc = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TimX(b, n);
	return 0;
}