#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(int[], int&, int&);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);
void Xuat(int[], int, int);

int main()
{
	int b[10000];
	int n, m, vtd, vtc;
	Nhap(b, n, m);
	TimCon(b, n, m, vtd, vtc);
	Xuat(b, vtd, vtc);
	return 0;
}

void Nhap(int a[], int& n, int& m)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap m:";
	cin >> m;
}

void Xuat(int a[], int vtd, int vtc)
{
	cout << "Mang con co tong cac phan tu trong mang bang m: ";
	for (int i = vtd; i <= vtc; i++)
		cout << setw(8) << a[i];
}	

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s = s + a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}