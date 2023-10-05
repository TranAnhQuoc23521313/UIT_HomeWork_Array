#include <iostream>

using namespace std;

void Nhap(float[], int&);
int DemGiaTri(float[], int);

int main()
{
	float b[100000];
	int n;
	Nhap(b, n);
	cout << "So luong cac so co phan tu lien ke trai dau: " << DemGiaTri(b, n);
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

int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] * a[1] < 0)
		dem++;
	for (int i = 1; i < n - 1; i++)
		if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0)
			dem++;
	if (a[n - 2] * a[n - 1] < 0)
		dem++;
	return dem;
}
