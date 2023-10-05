#include <iostream>

using namespace std;

void Nhap(int[], int&);
bool KtHoanThien(int);
int HoanThienDau(int[], int);

int main()
{
	int b[1000];
	int n;
	Nhap(b, n);
	if (HoanThienDau(b, n) != -1)
		cout << "So hoan thien dau tien: " << HoanThienDau(b, n);
	else
		cout << HoanThienDau(b, n);
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

bool KtHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s += i;
	if (s == k)
		return true;
	return false;
}

int HoanThienDau(int a[],int n)
{
	for (int i = 0; i < n; i++)
		if (KtHoanThien(a[i]))
			return a[i];
	return -1;
}