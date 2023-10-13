#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
int kt_chan_le(int[], int);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	cout << kt_chan_le(a, n);
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

int kt_chan_le(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] + a[i + 1]) % 2 == 0)
			flag = 0;
	return flag;
}