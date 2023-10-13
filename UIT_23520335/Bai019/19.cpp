#include <iostream>
using namespace std;
float NhoNhat(float a[], int n);
void LietKe(float a[], int n);

int main()
{
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;

	float a[1000];
	cout << "Nhap cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	LietKe(a, n);

	return 0;
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] < lc)
			lc = a[i];
	}
	return lc;
}

void LietKe(float a[], int n)
{
	float lc = NhoNhat(a, n);
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] == lc)
			cout << i << " ";
	}
}
