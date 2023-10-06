#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void XayDung(float[], int,float[],int&);
void Xuat(float[], int);

int main()
{
	float a[1000], b[1000];
	int n, m;
	Nhap(a, n);
	XayDung(a, n, b, m);
	Xuat(b, m);
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

void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i < n - 1; i++)
		b[i] = a[i + 1] + a[i - 1];
	b[k - 1] = a[n - 2];
}

void Xuat(float a[], int n)
{
	cout << "So luong phan tu cua mang B: " << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}