#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void Nhap(string, int[], int&);
void Xuat(int[], int);
void Nhap(string filename, int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}
void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}
int main()
{
	int b[100];
	int n;
	Nhap("MangMotChieu.inp", b, n);
	Xuat(b, n);
	return 0;
}
