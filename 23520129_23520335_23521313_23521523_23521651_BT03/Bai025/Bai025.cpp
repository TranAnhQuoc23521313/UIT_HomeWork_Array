#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "Cac gia tri cuc dai trong mang: \n";
	LietKe(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	if (n == 1)
	{
		return;
	}
	if (a[0] > a[1])
		cout << setw(4) << a[0];
	for (int i = 1; i < n-1; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			cout << setw(4) << a[i];
	if (a[n - 1] > a[n - 2])
		cout << setw(4) << a[n - 1];
}