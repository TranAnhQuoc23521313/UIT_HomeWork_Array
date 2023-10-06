#include <iostream>

using namespace std;

void Nhap(int[], int&);
bool KtNguyenTo(int[], int);
int LonNhat(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[1000];
	int n;
	Nhap(b, n);
	cout << "So nguyen to nho nhat lon hon gia tri lon nhat cua mang: " << TimGiaTri(b, n);
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

int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int TimGiaTri(int a[], int n)
{
	int lc = LonNhat(a, n) + 1;
	while (KtNguyenTo(lc)==false)
		lc++;
	return lc;
}