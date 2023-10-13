#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float TongGiaTri(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "Tong cac gia tri cuc tieu trong mang: " << TongGiaTri(b, n);
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

float TongGiaTri(float a[], int n)
{
	float s = 0;
	if (n == 1)
	{
		return a[0];
	}
	if (a[0] < a[1])
		s += a[0];
	for (int i = 1; i < n - 1; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s += a[i];
	if (a[n - 1] < a[n - 2])
			s += a[n - 1];
	return s;
}