#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	Xuat(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
		cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}