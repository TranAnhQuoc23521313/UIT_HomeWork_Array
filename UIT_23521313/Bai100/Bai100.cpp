#include <iostream>

using namespace std;

void Nhap(float[], int&);
float AmDau(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float b[1000];
	int n;
	Nhap(b, n);
	if (AmLonNhat(b, n) == 0)
		cout << "Gia tri am lon nhat: " << AmLonNhat(b, n);
	else
		cout << AmLonNhat(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

float AmLonNhat(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0 && a[i] > lc)
			lc = a[i];
	return lc;
}