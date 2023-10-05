#include <iostream>

using namespace std;

void Nhap(int[], int&);
int ChanCuoi(int[], int);

int main()
{
	int b[1000];
	int n;
	Nhap(b, n);
	if (ChanCuoi(b, n) != -1)
		cout << "So chan cuoi cung trong mang la:" << ChanCuoi(b, n);
	else
		cout << ChanCuoi(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int ChanCuoi(int a[], int n)
{
	for (int i = n - 1; i > 0; i--)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}