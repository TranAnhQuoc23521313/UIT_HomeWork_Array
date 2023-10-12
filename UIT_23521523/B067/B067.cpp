#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int a[],int b[], int& n,int& m)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap vao so luong phan tu cua mang B:";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap vao phan tu B[" << i << "]: ";
		cin >> b[i];
	}
}
int Tansuat(int c[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (c[i] == x)
			dem++;
	return dem;
}
void Demsl(int a[], int b[], int n,int m)
{
	int dem = 0;
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				flag = 0;
		}
		if (Tansuat(b, n, a[i]) == 0 && flag == 0)
			dem++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (b[i] == b[j])
				flag = 0;
		}
		if (Tansuat(a, m, b[i]) == 0 && flag == 0)
			dem++;
	}
	cout << dem;
}

int main()
{
	int a[200];
	int j;
	int b[200];
	int k;
	Nhap(a, b, j, k);
	Demsl(a, b, j, k);
	return 0;
}