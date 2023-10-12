#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&, int&, int&);
void LietKe(int[], int, int, int);

int main()
{
	int b[10000];
	int n, x, y;
	Nhap(b, n, x, y);
	cout << "Cac so chan thuoc doan [" << x << "," << y << "]:";
	LietKe(b, n, x, y);
	return 0;
}

void Nhap(int a[], int& n, int& x, int& y)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << setw(10) << a[i];
}