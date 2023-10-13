#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void nhap(int[], int&, int[], int&);
int dem_con(int[], int, int[], int);

int main()
{
	int n;
	int a[10000];
	int m;
	int b[10000];
	nhap(a, n, b, m);
	cout << dem_con(a, n, b, m);
	return 0;
}

void nhap(int a[], int &n, int b[], int &m)
{
	cout << "Nhap so luong phan tu cua mang a: ";
	cin >> n;
	cout << "Nhap cac gia tri cua mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap so luong phan tu cua mang b: ";
	cin >> m;
	cout << "Nhap cac gia tri cua mang b: " << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
	}
}

int dem_con(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}