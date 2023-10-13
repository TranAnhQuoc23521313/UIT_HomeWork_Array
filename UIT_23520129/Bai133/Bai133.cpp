#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void XayDung(float[], int, float[], int&);
void Xuat(float[], int);

int main()
{
	float aa[10000], bb[10000];
	int n, k;
	Nhap(aa, n);
	XayDung(aa, n, bb, k);
	Xuat(bb, k);
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
	cout << "Mang B duoc tao: ";
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

void XayDung(float a[], int n,float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			b[k++] = a[i];
}