#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int b[1000];
	int n;
	Nhap(b, n);
	cout << "Cac chu so chan trong mang: \n";
	LietKe(b, n);
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

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << setw(10) << a[i];
	}
}