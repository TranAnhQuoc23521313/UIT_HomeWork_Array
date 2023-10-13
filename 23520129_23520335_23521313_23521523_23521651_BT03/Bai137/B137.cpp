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
void hoanvi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void saptang(int a[], int n)
{
	for(int i=0; i<=n-2;i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (a[i] > a[j])
				hoanvi(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	saptang(b, k);
	return 0;
}