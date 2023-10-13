#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return 0;
}
float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
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
	cout << DuongNhoNhat(b, n);
	return 0;
}