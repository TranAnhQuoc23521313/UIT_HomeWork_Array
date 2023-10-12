#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int DoiXungDau(int[], int);
bool ktDoiXung(int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Gia tri doi xung dau tien trong mang: ";
	cout << DoiXungDau(b, n);
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

int DoiXungDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]))
			return a[i];
	return 10;
}

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}
