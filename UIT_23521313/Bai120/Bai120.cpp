#include <iostream>

using namespace std;

void Nhap(int[], int&);
bool KtNguyenTo(int);
int KtTonTai(int[], int);

int main()
{
	int b[1000];
	int n;
	Nhap(b, n);
	cout << "Gia tri tra ve: " << KtTonTai(b, n);
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

bool KtNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int KtTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (KtNguyenTo(a[i]))
			flag = 1;
	return flag;
}