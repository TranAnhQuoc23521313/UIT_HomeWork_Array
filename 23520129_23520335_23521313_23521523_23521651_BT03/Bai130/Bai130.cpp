#include <iostream>
#include <string>

using namespace std;

void Nhap(int[], int&,string);
int TanSuat(int[], int, int);
int KtThuoc(int[], int, int[], int);

int main()
{
	int a[1000], b[1000];
	int n, m;
	Nhap(a, n,"A");
	Nhap(b, m,"B");
	cout << "Gia tri tra ve: " << KtThuoc(a, n, b, m);
	return 0;
}

void Nhap(int a[], int& n,string Name_Array)
{
	cout << "Nhap vao so luong phan tu cua mang " +Name_Array+": ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int KtThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}