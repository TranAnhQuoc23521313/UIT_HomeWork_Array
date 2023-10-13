#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int vi_tri_duong_dau(int[], int);
int vi_tri_duong_nho_nhat(int[], int);
int tim_chu_so(int[], int);

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
	cout << tim_chu_so(a, n);
	return 0;
}

int vi_tri_duong_dau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

int vi_tri_duong_nho_nhat(int a[], int n)
{
	int lc = vi_tri_duong_dau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	}
	return lc;
}

int tim_chu_so(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t /= 10;
		}
	}
	return vi_tri_duong_nho_nhat(dem, 10);
}