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
int kt(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n-2; i++)
		if ((a[i]-a[i+1])!=(a[0]-a[1]))
			flag = 0;
	return flag;
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	if (kt(b, k) == 1)
		cout <<"Co lap thanh cap so cong";
	else
		cout << "Khong lap thanh cap so cong";
	return 0;
}