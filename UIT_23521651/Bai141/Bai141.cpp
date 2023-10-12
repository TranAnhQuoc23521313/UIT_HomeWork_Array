#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void HoanVi(int&, int&);
void Xuat(int[], int);
bool ktHoanThien(int); 
void HoanThienGiam(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	HoanThienGiam(b, n);
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

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktHoanThien(a[i]) &&
				ktHoanThien(a[j]) && a[i] < a[j])
				HoanVi(a[i], a[j]);
}