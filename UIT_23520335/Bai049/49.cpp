#include<iostream>
#include<cmath>
using namespace std;

float trung_binh(float[], int);

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
	cout << trung_binh(a, n);
	return 0;
}

float trung_binh(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				s += abs(a[i] - a[j]);
				dem++;
			}
		}
	}
	if (dem == 0)
		return 0;
	return s / dem;
}