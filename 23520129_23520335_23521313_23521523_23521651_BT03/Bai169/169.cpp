#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void nhap(float[], int&, float&, int&);
void them_vi_tri(float[], int&, float, int);

int main()
{
	int n;
	float a[10000];
	float x;
	int k;
	nhap(a, n, x, k);
	them_vi_tri(a, n, x, k);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

void nhap(float a[], int& n, float &x, int &k)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Gia tri them: ";
	cin >> x;
	cout << "Vi tri them: ";
	cin >> k;
}

void them_vi_tri(float a[], int &n, float x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}