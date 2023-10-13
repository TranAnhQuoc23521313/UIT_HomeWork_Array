#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float b[10000];
	int n;
	Nhap(b, n);
	cout << "Tat ca cac cap so: \n";
	LietKe(b, n);
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

void LietKe(float a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n ; j++)
		{
			if (i != j)
			{
				cout << "(" << a[i] << "," << a[j] << ")" << endl;
			}
		}
}