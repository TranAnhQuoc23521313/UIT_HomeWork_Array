#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktHoanThien(int); 
int ktTinhChat(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Mang khong ton tai so hoan thien lon hon 26?: ";
	cout << ktTinhChat(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int ktTinhChat(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) && a[i] > 256)
			dem++;
	if (dem == 0)
		return 1;
	return 0;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}
