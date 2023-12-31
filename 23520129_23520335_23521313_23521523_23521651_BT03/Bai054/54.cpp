#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[], int& n);
bool kt_doi_xuong(int);
int dem_doi_xuong(int[], int);

int main()
{
	int n;
	int a[10000];
	nhap(a, n);
	cout << dem_doi_xuong(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool kt_doi_xuong(int n)
{
	int t = n;
	int dn = 0;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}

int dem_doi_xuong(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(kt_doi_xuong(a[i]))
			dem++;
	}
	return dem;
}