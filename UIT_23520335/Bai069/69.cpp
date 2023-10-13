#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int tan_suat(int[], int, int);
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

int tan_suat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

void liet_ke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
		{
			if (a[j] == a[i])
				flag = 0;
			int kq = tan_suat(a, n, a[i]);
			if (flag == 1 && kq > 1)
				cout << setw(8) << a[i];
		}
	}
}