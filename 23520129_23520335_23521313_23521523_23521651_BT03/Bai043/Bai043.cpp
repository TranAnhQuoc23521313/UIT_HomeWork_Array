#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float TongCucDai(float[], int);
float TongCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TongCucDai(b, n);
	return 0;
}