#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void xoavitri(int a[], int& n, int k)
{
	for (int i = k; i < n - 2; i++) {
		a[i] = a[i + 1];
		n--;
	}
}
void xoatrung(int a[], int& n)
{
	int flag;
	for (int i = n - 1; i >= 0; i--) {
		flag = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
				flag = 1;
		}
		if (flag == 1)
			xoavitri(a, n, i);
	}
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}


int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	xoatrung(b, k);
	return 0;
}