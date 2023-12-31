#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
bool kt_nguyen_to(int);
int nguyen_to_dau(int[], int);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	cout << nguyen_to_dau(a, n);
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

bool kt_nguyen_to(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
		return true;
	return false;
}

int nguyen_to_dau(int a[], int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		if (kt_nguyen_to(a[i]))
			return a[i];
	}
	return 0;
}