#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int DemGiaTri(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "So luong gia tri duong chia het cho 7 trong mang:";
	cout << DemGiaTri(b, n);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] % 7 == 0)
			dem++;
	return dem;
}
