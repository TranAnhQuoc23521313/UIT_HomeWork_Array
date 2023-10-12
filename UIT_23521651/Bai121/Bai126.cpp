#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
int ktGiam(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "Mang co giam dan khong?: ";
	cout << ktGiam(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int ktGiam(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[i + 1])
			flag = 0;
	return flag;
}
