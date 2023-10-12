#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(float[], int&);
void NhapGiam(float[], int&);
void Xuat(float[], int);

int main()
{
	float b[10000];
	int n;
	NhapGiam(b, n);
	Xuat(b, n);
	return 0;
}

void NhapGiam(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	int j;
	for (int i = 0; i < n; i++)
	{
		float x;
		cout << "Nhap a[" << i << "]: ";
		cin >> x;
		for (j = i - 1; j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang giam dan: \n";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}