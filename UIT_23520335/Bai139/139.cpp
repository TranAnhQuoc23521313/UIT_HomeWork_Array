#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void hoan_vi(int&, int&);
void vi_tri_le_tang(int[], int);

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
	vi_tri_le_tang(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

void hoan_vi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void vi_tri_le_tang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				hoan_vi(a[i], a[j]);
	}
}