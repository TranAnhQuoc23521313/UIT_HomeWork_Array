#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void dich_phai(float[], int);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	float a[10000];
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	dich_phai(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

void dich_phai(float a[], int n)
{
	float temp = a[n - 1];
	for (int i = n - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}