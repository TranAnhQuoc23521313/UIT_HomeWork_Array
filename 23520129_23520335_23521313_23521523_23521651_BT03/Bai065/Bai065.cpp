#include <iostream>

using namespace std;

void Nhap(float[], int&);
int DemPhanBiet(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "So luong gia tri phan biet trong mang: " << DemPhanBiet(b, n);
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

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}