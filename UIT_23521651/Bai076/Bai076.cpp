#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&, float&);
int TimViTri(float[], int, float);

int main()
{
	float b[10000];
	float x;
	int n;
	Nhap(b, n, x);
	cout << "Vi tri cua so thuc trong mang: ";
	cout << TimViTri(b, n, x);
	return 0;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap x:";
	cin >> x;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int TimViTri(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(a[lc] - x))
			lc = i;
	return lc;
}
