#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int NguyenToDau(int[], int);
int TimGiaTri(int[], int);
bool ktNguyenTo(int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "So nguyen to lon nhat trong mang: ";
	cout << TimGiaTri(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int NguyenToDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = NguyenToDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]) && a[i] > lc)
			lc = a[i];
	return lc;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
