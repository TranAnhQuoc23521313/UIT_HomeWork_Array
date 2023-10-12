#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int ViTriDau(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Vi tri cua gia tri chan dau tien trong mang: ";
	cout << ViTriDau(b, n);
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

int ViTriDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return i;
	return -1;
}