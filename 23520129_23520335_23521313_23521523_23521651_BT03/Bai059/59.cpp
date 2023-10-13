#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
int dem_gia_tri(int[], int);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	cout << dem_gia_tri(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int dem_gia_tri(int a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				dem++;
		}
	}
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}