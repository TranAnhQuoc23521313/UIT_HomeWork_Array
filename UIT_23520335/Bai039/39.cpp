#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
int chu_so_dau(int);
int tong_gia_tri(int[], int);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	cout << tong_gia_tri(a, n);
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

int chu_so_dau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int tong_gia_tri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (chu_so_dau(a[i]) % 2 == 0)
			s += a[i];
	}
	return s;
}