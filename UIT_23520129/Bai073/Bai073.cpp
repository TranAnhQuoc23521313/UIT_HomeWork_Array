#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float NhoNhat(float[], int);
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << NhoNhat(b, n);
	return 0;
}