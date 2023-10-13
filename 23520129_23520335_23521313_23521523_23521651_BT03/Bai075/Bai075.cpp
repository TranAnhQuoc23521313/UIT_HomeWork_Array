#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

void Nhap(float[], int&, float&);
float XaNhat(float[], int, float);

int main()
{
	float b[1000];
	float x;
	int n;
	Nhap(b, n, x);
	cout << "Gia tri xa X nhat: " << XaNhat(b, n, x);
	return 0;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap X:";
	cin >> x;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

float XaNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	return lc;
}