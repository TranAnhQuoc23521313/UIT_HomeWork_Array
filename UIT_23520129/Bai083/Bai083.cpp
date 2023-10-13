#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int DauTien(int[], int, int, int);
int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}
int main()
{
	int b[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	int x;
	cout << "Nhap x:";
	cin >> x;
	int y;
	cout << "Nhap y:";
	cin >> y;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << DauTien(b, n, x, y);
	return 0;
}