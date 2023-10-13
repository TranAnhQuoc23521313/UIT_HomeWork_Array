#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&, char);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int aa[10000], bb[10000];
	int nA;
	int nB;
	Nhap(aa, nA, 'A');
	Nhap(bb, nB, 'B');
	cout << "So luong phan tu thoa dieu kien trong mang: ";
	cout << DemXuatHien(aa, nA, bb, nB);
	return 0;
}

void Nhap(int a[], int& n, char s)
{
	cout << "Nhap n" << s << ":";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu " << s << "[" << i << "]: ";
		cin >> a[i];
	}
}

int DemXuatHien(int a[], int n, int b[], int m)
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