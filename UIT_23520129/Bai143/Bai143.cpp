#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void hoanvi(int&, int&);
void saptang(int[], int);
int  kthoanvi(int [], int , int [], int );
void Xuat(int[], int);

int main()
{
	int aa[10000], bb[10000];
	int n, m;
	Nhap(aa, n);
	Nhap(bb, m);
	cout << kthoanvi(aa, n, bb, m);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap phan tu moi mang:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu [" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang B duoc tao: ";
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void saptang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}
int kthoanvi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	saptang(a, n);

	saptang(b, m);

	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
