#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void DuaVeDau(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	DuaVeDau(b, n);
	Xuat(b, n);
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
	cout << "Mang sau khi sap xep cac so hoan thien giam dan: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}

void DuaVeDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}