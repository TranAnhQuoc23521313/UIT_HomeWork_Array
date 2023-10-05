#include <iostream>

using namespace std;

void Nhap(int[], int&);
int DemNguyenTo(int[], int);
bool KtNguyenTo(int);

int main()
{
	int b[100000];
	int n;
	Nhap(b, n);
	cout << "So luong cac so nguyen to trong mang: " << DemNguyenTo(b, n);
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

bool KtNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (KtNguyenTo(a[i]))
			dem++;
	return dem;
}