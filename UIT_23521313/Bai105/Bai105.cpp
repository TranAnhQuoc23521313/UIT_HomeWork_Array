#include <iostream>

using namespace std;

void Nhap(int[], int&);
bool ktToanLe(int);
int ToanLeDauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[1000];
	int n;
	Nhap(b, n);
	cout << "Chu so toan le lon nhat: " << TimGiaTri(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktToanLe(int k)
{
	int t = k;
	while (t != 0)
	{
		if (t % 2 == 0)
			return false;
		t /= 10;
	}
	return true;
}

int ToanLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) && a[i] > lc)
			lc = a[i];
	return lc;
}