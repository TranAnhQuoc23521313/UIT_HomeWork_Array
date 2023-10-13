#include<iostream>
#include<cmath>
using namespace std;

int tong_cuc_dai(int[], int);
int tong_cuc_tieu(int[], int);
int tong_cuc_tri(int[], int);

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
	cout << tong_cuc_tri(a, n);
	return 0;
}

int tong_cuc_dai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] > a[1])
		s += a[0];
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s += a[i];
	}
	if (a[n - 1] > a[n - 2])
		s += a[n - 1];
	return s;
}

int tong_cuc_tieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s += a[0];
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s += a[i];
	}
	if (a[n - 1] < a[n - 2])
		s += a[n - 1];
	return s;
}

int tong_cuc_tri(int a[], int n)
{
	int s1 = tong_cuc_dai(a, n);
	int s2 = tong_cuc_tieu(a, n);
	return (s1 + s2);
}