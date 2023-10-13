#include <iostream>

using namespace std;
void Nhap(float[], int&);
int KtTang(float[], int);


int main()
{
	float b[1000];
	int n;
	Nhap(b, n);
	cout << "Gia tri tra ve: " << KtTang(b, n);
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

int KtTang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1])
			flag = 0;
	return flag;
}