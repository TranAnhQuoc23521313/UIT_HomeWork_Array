#include<iostream>
using namespace std;

float tong_duong(float[], int);

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
	cout << tong_duong(a, n);
	return 0;
}

float tong_duong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			s += a[i];
	}
	return s;
}