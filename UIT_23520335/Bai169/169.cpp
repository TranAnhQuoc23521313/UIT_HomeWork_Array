#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void them_vi_tri(float[], int&, float, int);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	float a[10000];
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float x; 
	cout << "Gia tri them: ";
	cin >> x;

	int k;
	cout << "Vi tri them: ";
	cin >> k;

	them_vi_tri(a, n, x, k);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

void them_vi_tri(float a[], int &n, float x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}