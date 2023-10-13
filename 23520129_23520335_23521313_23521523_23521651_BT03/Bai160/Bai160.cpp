#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&, int&);
void XoaViTri(float[], int& ,int);
void Xuat(float[], int, int);

int main()
{
	float a[1000];
	int n, k;
	Nhap(a, n, k);
	XoaViTri(a, n, k);
	Xuat(a, n, k);
	return 0;
}

void Nhap(float a[], int& n, int& k)
{
	cout << "Nhap vao gia tri cua K: ";
	cin >> k;
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void XoaViTri(float a[], int& n,int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}

void Xuat(float a[], int n,int k)
{
	cout << "Mang sau khi xoa phan tu thu " << k << ": \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}