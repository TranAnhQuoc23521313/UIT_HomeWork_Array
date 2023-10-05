#include <iostream>

using namespace std;

void Nhap(int[], int& n);
int DemChan(int[], int);

int main()
{
	int b[100000];
	int n;
	Nhap(b, n);
	cout << "So luong cac so co gia tri chan trong mang: " << DemChan(b, n);
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

int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}