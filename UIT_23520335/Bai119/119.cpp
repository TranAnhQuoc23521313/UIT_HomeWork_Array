#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int kt_ton_tai(int[], int);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	int a[10000];
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << kt_ton_tai(a, n);
	return 0;
}

int kt_ton_tai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n, i++;)
	{
		if (a[i] % 2 == 0)
			flag = 1;
	}
	return flag;
}