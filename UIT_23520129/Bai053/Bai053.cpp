#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int TanSuat(float[], int, float);
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int main()
{
	float b[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	float x;
	cout << "Nhap x:";
	cin >> x;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TanSuat(b, n, x);
	return 0;
}