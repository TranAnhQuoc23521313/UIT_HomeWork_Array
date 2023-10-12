#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int TongChinhPhuong(int[], int);
bool ktChinhPhuong(int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Tong chinh phuong la: " << TongChinhPhuong(b, n);
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

bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int TongChinhPhuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktChinhPhuong(a[i]))
			s += a[i];
	return s;
}