#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void XuatCon(float a[], int n, int l);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	float a[10000];
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	//int vt;
	int l;
	cout << "Do dai cua mang con: ";
	cin >> l;

	XuatCon(a, n, l);

	return 0;
}

void XuatCon(float a[], int n, int vt, int l)
{
	if (vt + l > n)
		return;
	for (int i = vt; i < vt + l; i++)
	{
		cout << a[i] << " ";
	}
}

void XuatCon(float a[], int n, int l)
{
	for (int vt = 0; vt <= n - 1; vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
}