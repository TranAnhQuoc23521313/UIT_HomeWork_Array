#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&, char);
void Tron(int[], int, int[], int, int[], int&);
void Xuat(int[], int);

int main()
{
	int aa[10000], bb[10000], cc[10000];
	int n, m, p;
	Nhap(aa, n, 'A');
	Nhap(bb, m, 'B');
	Tron(aa, n, bb, m, cc, p);
	Xuat(cc, p);
	return 0;
}

void Nhap(int a[], int& n, char s)
{
	cout << "Nhap n" << s << ":";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu " << s << "[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang tron duoc xep thu tu tang dan: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void Tron(int a[], int n, int b[], int m,
	int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}