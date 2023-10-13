#include<iostream>
using namespace std;

void nhap(float a[], int& n);
void LietKe(float a[], int n);

int main()
{
	int n;
	float a[10000];
	nhap(a, n);
	LietKe(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] * a[1] < 0)
		cout << a[0] << " ";
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] * a[i + 1] < 0 || a[i] * a[i - 1] < 0)
			cout << a[i] << " ";
	}
	if (a[n - 1] * a[n - 2] < 0)
		cout << a[n - 1] << " ";
}