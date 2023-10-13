#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void MotVeDau(float[], int);
void HoanVi(float&, float&);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	Nhap(a, n);
	MotVeDau(a, n);
	Xuat(a, n);
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

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void MotVeDau(float a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			HoanVi(a[i], a[vt]);
			vt++;
		}
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi sap xep: \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}