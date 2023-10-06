#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(float[], int&);
int KtCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
void Xuat(float[], int, int);

int main()
{
	int vtd, vtc;
	float a[1000];
	int n;
	Nhap(a, n);
	DuongDaiNhat(a, n, vtd, vtc);
	Xuat(a, vtd, vtc);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int KtCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i < l; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}

void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
	for (int l = n; l >= 1;l--)
		for (int vt = 0; vt <= n-l;vt++)
			if (KtCon(a, n, vt, l) == 1)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

void Xuat(float a[], int vtd, int vtc)
{
	cout << "Day con duong dai nhat: \n";
	for (int i = vtd; i <= vtc; i++)
		cout << setw(8) << a[i];
}