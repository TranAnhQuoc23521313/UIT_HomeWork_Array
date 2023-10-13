#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void ChanVeDau(int[], int);
void LeVeCuoi(int[], int);
void ChanDauLeCuoi(int[], int);
void ChanVeDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] != 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}
void LeVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 != 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}
void ChanDauLeCuoi(int a[], int n)
{
	ChanVeDau(a, n);
	LeVeCuoi(a, n);
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	ChanDauLeCuoi(b, n);
	return 0;
}