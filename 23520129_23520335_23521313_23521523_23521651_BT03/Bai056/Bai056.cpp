#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int DemHoanThien(int[], int);
bool ktHoanThien(int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "So luong so hoan thien trong mang: ";
	cout << DemHoanThien(b, n);
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

int DemHoanThien(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]))
			dem++;
	return dem;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}
