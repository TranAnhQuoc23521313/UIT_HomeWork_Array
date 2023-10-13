#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);
	XuatCon(a, n);
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

void XuatCon(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			for (int i = 0; i < l; i++)
				cout << setw(8) << a[vt+i];
			cout << endl;
		}
	}
}