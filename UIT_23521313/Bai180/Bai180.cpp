#include <iostream>

using namespace std;

void Nhap(int[], int&);
int KtCon(int[], int, int, int);
int DemConTang(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);
	cout << "So day con co gia tri tang: " << DemConTang(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int KtCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}

int DemConTang(int a[], int n)
{
	int dem = 0;
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n-l; vt++)
		{
			if (KtCon(a, n, vt, l) == 1)
				dem++;
		}
	}
	return dem;
}