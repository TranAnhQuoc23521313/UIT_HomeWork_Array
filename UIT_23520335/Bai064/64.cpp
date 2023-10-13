#include<iostream>
#include<cmath>
using namespace std;

int dem_phan_biet(int[], int);

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
	cout << dem_phan_biet(a, n);
	return 0;
}

int dem_phan_biet(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < n; j++)
		{
			if (a[j] == a[i])
				flag = false;
		}
		if (flag == true)
			dem++;
	}
	return dem;
}