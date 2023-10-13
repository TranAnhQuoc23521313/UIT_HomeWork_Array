#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
bool kt_nguyen_to(int);
void xay_dung(int[], int, int[], int&);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	int k;
	int b[10000];
	xay_dung(a, n, b, k);
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << endl;
	}
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool kt_nguyen_to(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void xay_dung(int a[], int n, int b[], int& k)
{
	k = 0;
	for(int i=0; i<n;i++)
		if (kt_nguyen_to(a[i]))
		{
			b[k] = a[i];
			k++;
		}
}