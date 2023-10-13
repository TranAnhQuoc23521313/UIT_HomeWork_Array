#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&, int);
int TanSuat(float[], int, float);
void XoaPhanTu(float[], int&);
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void XoaTrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void XoaPhanTu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (TanSuat(a, n, a[i]) > 1)
			XoaTrung(a, n, a[i]);
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	XoaPhanTu(b, n);
	return 0;
}