#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int& ,int&,int&);
void LietKe(float[], int, int, int);

int main()
{
	float b[10000];
	int n;
	int x, y;
	Nhap(b, n,x,y);
	cout << "Cac phan tu co gia tri trong doan [" << x << "," << y << "]:";
	LietKe(b, n, x, y);
	return 0;
}

void Nhap(float a[], int& n, int& x, int& y)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			cout << setw(4) << a[i];
}