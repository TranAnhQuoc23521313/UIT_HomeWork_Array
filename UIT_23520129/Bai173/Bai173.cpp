#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void XuatCon(int[], int, int, int);
void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(8) << a[vt + i];
}
int main()
{
	int b[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	int vt;
	cout << "Nhap vi tri:";
	cin >> vt;
	int l;
	cout << "Nhap do dai:";
	cin >> l;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	XuatCon(b, n, vt , l);
	return 0;
}