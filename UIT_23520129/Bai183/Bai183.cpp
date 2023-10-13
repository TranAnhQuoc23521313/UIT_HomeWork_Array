#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int ktCon(int[], int, int[], int);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang a: ";
	cin >> n;

	int a[10000];
	cout << "Nhap cac gia tri cua mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	int m;
	cout << "Nhap so luong phan tu cua mang b: ";
	cin >> m;

	int b[10000];
	cout << "Nhap cac gia tri cua mang b: " << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
	}
	cout << ktCon(a, n, b, m);
	return 0;
}

int ktCon(int a[], int n, int b[], int m)
{
	 if (n > m)
		 return 0;
	 int flag = 0;
	 for (int vt = 0; vt <= m - n; vt++)
	 {
		 int co = 1;
		 for (int i = 0; i < n; i++)
		 if (a[i] != b[vt + i])
			 co = 0;
	 if (co == 1)
			 flag = 1;
	 }
	 return flag;
}