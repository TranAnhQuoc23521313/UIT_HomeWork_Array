#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int DemGiaTri(int[], int);
bool ktNguyenTo(int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "So luong so nguyen to phan biet trong mang: ";
	cout << DemGiaTri(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (ktNguyenTo(a[i]) && flag == 1)
			dem++;
	}
	return dem;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
