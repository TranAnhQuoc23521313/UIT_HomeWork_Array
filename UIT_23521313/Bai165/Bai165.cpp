#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(float[], int&);
void XoaViTri(float[], int&, int);
float LonNhat(float[], int);
void XoaLonNhat(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	Nhap(a, n);
	XoaLonNhat(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (lc < a[i])
			lc = a[i];
	return lc;
}

void XoaLonNhat(float a[], int& n)
{
	float ln = LonNhat(a, n);
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == ln)
			XoaViTri(a, n, i);
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi xoa phan tu lon nhat: \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}