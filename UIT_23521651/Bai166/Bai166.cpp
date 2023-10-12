#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(float[], int&, float&);
void XoaViTri(float[], int&, int);
void XoaTrungX(float[], int&, float);
void Xuat(float[], int);

int main()
{
	float b[10000];
	float x;
	int n;
	Nhap(b, n, x);
	XoaTrungX(b, n, x);
	Xuat(b, n);
	return 0;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi xoa phan tu trung voi x: \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrungX(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}