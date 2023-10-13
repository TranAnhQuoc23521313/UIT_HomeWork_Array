#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void XoaViTri(int[], int&, int);
bool ktChinhPhuong(int);
void XoaChinhPhuong(int[], int&);
void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
void XoaChinhPhuong(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktChinhPhuong(a[i]))
			XoaViTri(a, n, i);
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	XoaChinhPhuong(b, n);
	return 0;
}