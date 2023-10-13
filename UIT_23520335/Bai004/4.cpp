#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
void nhap(string filename, float[], int&);
void xuat(float[], int);

int main()
{
	float a[500];
	int n;
	nhap("data.txt", a, n);
	xuat(a, n);
	return 0;
}

void nhap(string filename, float a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}

void xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}