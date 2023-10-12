#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int, int);
int DemConGiam(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "So mang con giam trong mang la: " << DemConGiam(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] < a[vt + i + 1])
			flag = 0;
	return flag;
}

int DemConGiam(int a[], int n)
{
	int dem = 0;
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
				dem++;
		}
	}
	return dem;
}