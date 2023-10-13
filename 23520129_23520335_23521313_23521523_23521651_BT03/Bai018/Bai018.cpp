#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float LonNhat(float[], int);
void LietKe(float[], int);
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
		if (a[i] > lc)
			lc = a[i];
		
	}
	return lc;
}
void LietKe(float a[], int n)
{
	float lc = LonNhat(a, n);
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] == lc)
			cout << i << ' ';
	}
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	LietKe(b, n);
	return 0;
}