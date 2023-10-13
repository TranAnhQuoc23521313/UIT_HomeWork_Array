#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void nhaptang(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}
int main()
{
	int b[200];
	int k;
	nhaptang(b, k);
	return 0;
}