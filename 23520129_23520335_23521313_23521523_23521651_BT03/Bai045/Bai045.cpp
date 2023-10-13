//Khai bao thu vien
#include <iostream>
#include <iomanip>
using namespace std;


//Khai bao cac ham
void Nhap(float[], int&);
int DemSoLuong(float[], int);
float TongDuong(float[], int);
float TrungBinhCong(float[], int);

int main()
{
	float b[100000];
	int n;
	Nhap(b, n);
	cout << "Trung binh cong cac so duong trong mang: " << TrungBinhCong(b, n);
	return 0;
}


//Dinh nghia cac ham
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


float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}

float TrungBinhCong(float a[], int n)
{
	float s = TongDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return s / dem;
}