#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void XayDung(int[], int, int[], int&);
void Xuat(int[], int);

int main()
{
	int aa[10000], bb[10000];
	int n, k;
	Nhap(aa, n);
	XayDung(aa, n, bb, k);
	Xuat(bb, k);
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

void Xuat(int a[], int n)
{
	cout << "Mang B duoc tao: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else
			if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
				b[k++] = 0;
		b[k++] = a[i];
	}
}