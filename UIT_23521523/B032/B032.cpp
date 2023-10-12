#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
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
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (a[i] == a[j] + a[k])
					cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")";
			}
		}
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	LietKe(b, k);
	return 0;
}