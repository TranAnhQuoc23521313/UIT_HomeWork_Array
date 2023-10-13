#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
bool KtNguyenTo(int);
void NguyenToTang(int[], int);
void HoanVi(int&, int&);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);
	NguyenToTang(a, n);
	Xuat(a, n);
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

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void NguyenToTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (KtNguyenTo(a[i]) && KtNguyenTo(a[j]) && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void Xuat(int a[], int n)
{
	cout << "Mang sau khi sap xep: \n";
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}