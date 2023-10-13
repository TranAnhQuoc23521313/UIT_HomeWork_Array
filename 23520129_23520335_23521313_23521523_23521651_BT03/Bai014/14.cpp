#include<iostream>
#include<iomanip>
using namespace std;

void nhap(int a[], int& n);
bool ktra_chinh_phuong(int );
void liet_ke(int[], int);

int main()
{
	int n;
	int a[1000];
	nhap(a, n);
	liet_ke(a, n);

	return 0;
}

void nhap(int a[], int& n)
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
bool ktra_chinh_phuong(int n)
{
	for (int i = 0; (i * i) <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

void liet_ke(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktra_chinh_phuong(a[i]))
			cout << i<< endl;
}