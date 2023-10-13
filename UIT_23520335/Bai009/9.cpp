#include<iostream>
#include<iomanip>
using namespace std;

void nhap(int[], int&);
int chu_so_dau(int n);
void liet_ke(int a[], int n);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	liet_ke(a, n);

	return 0;
}

void nhap(int a[], int &n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int chu_so_dau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}

void liet_ke(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (chu_so_dau(a[i]) % 2 == 0)
			cout << a[i] << endl;
	}
}