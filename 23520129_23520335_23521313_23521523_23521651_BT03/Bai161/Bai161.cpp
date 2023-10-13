#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int); 
void XoaAm(float[], int&);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	XoaAm(b, n);
	Xuat(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi sap xep cac so hoan thien giam dan: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaAm(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
			XoaViTri(a, n, i);
}