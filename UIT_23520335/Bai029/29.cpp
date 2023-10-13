#include<iostream>
using namespace std;

void nhap(int a[], int& n);
int chan_dau(int[], int);
int chan_lon_nhat(int[], int);
void liet_ke(int[], int);

int main()
{
	int n;
	int a[10000];
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

int chan_dau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}

int chan_lon_nhat(int a[], int n)
{
	int lc = chan_dau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	}
	return lc;
}

void liet_ke(int a[], int n)
{
	int dd = chan_lon_nhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co chan";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == dd)
			cout << i;
	}
}