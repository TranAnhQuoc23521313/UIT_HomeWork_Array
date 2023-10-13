#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float TichDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhNhan(float[], int);
float TichDuong(float a[], int n)
{
	float T = 01;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T = T * a[i];
	return T;
}
int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}
float TrungBinhNhan(float a[], int n)
{
	float T = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(T, (float)1 / dem);
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TrungBinhNhan(b, n);
	return 0;
}