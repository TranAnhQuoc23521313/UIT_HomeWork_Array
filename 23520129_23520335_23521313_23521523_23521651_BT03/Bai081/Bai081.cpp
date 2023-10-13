#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
float DauTien(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "Gia tri dau tien lon hon 2003: ";
	cout << DauTien(b, n);
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

float DauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2003)
		{
			float lc = a[i];
			return lc;
		}
	return 0;
}
