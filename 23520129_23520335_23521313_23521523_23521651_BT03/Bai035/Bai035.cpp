#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

void Nhap(int[], int&);
int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{	
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Tong cua cac so co hang chuc la so 5: " << TongGiaTri(b,n);
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

int HangChuc(int a)
{
	int t = abs(a);
	return t = (t / 10) % 10;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (HangChuc(a[i]) == 5)
			s += a[i];
	return s;
}