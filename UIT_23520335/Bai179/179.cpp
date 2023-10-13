#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int kt_con(int[], int, int, int);
void liet_ke(int[], int);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	int a[10000];
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	liet_ke(a, n);
	return 0;
}

int kt_con(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + 1] <= 0)
			flag = 0;
	return flag;
}

void liet_ke(int a[], int n)
{
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - 1; vt++)
		{
			if (kt_con(a, n, vt, l) == 1)
			{
				for (int i = 0; i < 1; i++)
					cout << setw(8) << a[vt + i];
				cout << "\n";
			}
		}
	}
}