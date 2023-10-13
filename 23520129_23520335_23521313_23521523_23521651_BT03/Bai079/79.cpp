#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nhap(float a[], int& n);
float duong_dau(float[], int);

int main()
{
	int n;
	float a[10000];
	nhap(a, n);
	cout << duong_dau(a, n);
	return 0;
}

void nhap(float a[], int& n)
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

float duong_dau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
	return -1;
}