#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "Cac cap so thoa dieu kien: ";
	LietKe(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i != j && a[i] <= a[j])
				cout << "(" << setprecision(5) << a[i] << ", " << setprecision(5) << a[j] << ")  ";
}