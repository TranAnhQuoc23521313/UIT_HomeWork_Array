#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&,float&);
void ThemBaoToan(float[], int&, float);
void Xuat(float[], int, float);

int main()
{
	float a[1000];
	int n;
	float x;
	Nhap(a, n, x);
	ThemBaoToan(a, n, x);
	Xuat(a, n, x);
	return 0;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap vao gia tri X: ";
	cin >> x;
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}

void Xuat(float a[], int n, float x)
{
	cout << "Mang sau khi duoc them gia tri " << x << ": \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}