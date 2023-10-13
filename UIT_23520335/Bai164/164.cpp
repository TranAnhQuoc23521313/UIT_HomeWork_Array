#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
void xoa_vi_tri(int[], int&, int);
bool kt_nguyen_to(int);
void xoa_nguyen_to(int[], int&);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	xoa_nguyen_to(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
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

void xoa_vi_tri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

bool kt_nguyen_to(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

void xoa_nguyen_to(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (kt_nguyen_to(a[i]))
			xoa_vi_tri(a, n, i);
}