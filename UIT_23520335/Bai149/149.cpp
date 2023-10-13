#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nguyen_hoa(float[], int);

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
	nguyen_hoa(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

void nguyen_hoa(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			a[i] = int(a[i] + 0.5);
		else
			a[i] = int(a[i] - 0.5);
	}
}