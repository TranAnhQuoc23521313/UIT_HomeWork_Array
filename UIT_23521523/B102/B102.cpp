#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
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
bool Kiemtraht(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	else
		return false;
}
int Ht(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (Kiemtraht(a[i]) == true)
			return a[i];
	return -1;
}
void Tim(int a[], int n)
{
	int lc = Ht(a,n);
	if (lc == -1)
	{
		cout << lc;
		return;
	}
	for (int i = 0; i < n; i++)
		if (Kiemtraht(a[i]) == true && a[i] < lc)
			lc = a[i];
	cout << lc;
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	Tim(b, k);
	return 0;
}