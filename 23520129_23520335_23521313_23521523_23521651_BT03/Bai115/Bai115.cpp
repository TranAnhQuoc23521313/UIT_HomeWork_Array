#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
void GanNhat(float[], int, float&,float&);

int main()
{
	float b[1000];
	int n;
	float x, y;
	Nhap(b, n);
	GanNhat(b, n, x, y);
	cout << "Hai gia tri gan nhau nhat trong mang: (" << x << "," << y << ")";
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

void GanNhat(float a[], int n, float& x, float& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
}