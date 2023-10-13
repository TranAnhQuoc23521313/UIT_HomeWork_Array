#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Xuat(float a[],int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}
int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	return 0;
}