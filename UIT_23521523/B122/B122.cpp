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
int kt(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i]%2 != 0)
			flag = 0;
	return flag;
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	cout << kt(b, k);
	return 0;
}