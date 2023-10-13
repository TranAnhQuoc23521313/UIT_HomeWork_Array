#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int tim_vi_tri(float[], int);

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
	cout << tim_vi_tri(a, n);
	return 0;
}

int tim_vi_tri(float a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[lc])
			lc = i;
	}
	return lc;
}