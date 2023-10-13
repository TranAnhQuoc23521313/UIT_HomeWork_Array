#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void DuongTang(float[], int);
void AmGiam(float[], int);
void DuongTangAmGiam(float[], int);
void HoanVi(float&, float&);
void Xuat(float[], int n);

int main()
{
	float a[1000];
	int n;
	Nhap(a, n);
	DuongTangAmGiam(a, n);
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

void DuongTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void AmGiam(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				HoanVi(a[i], a[j]);
}

void DuongTangAmGiam(float a[], int n)
{
	DuongTang(a, n);
	AmGiam(a, n);
}

void Xuat(float a[], int n)
{
	cout << "Mang sau khi sap xep: \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}