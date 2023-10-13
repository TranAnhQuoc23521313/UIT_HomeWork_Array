#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int a[],int b[], int &n,int &m)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap m:";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	for (int j = 0; j < m; j++)
		b[j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void hoanvi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void saptang(int c[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (c[i] > c[j])
				hoanvi(c[i], c[j]);
		}
	}
	for (int i = 0; i < n; i++)
		cout << setw(5) << c[i];
}
void tron(int a[], int b[], int c[], int n, int m, int& q)
{
	int i = 0;
	int j = 0;
	q = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j<m && a[i]>b[j]) || (j >= m))
			c[q++] = a[i++];
		else
			c[q++] = b[j++];
	}
	saptang(c, q);
}

int main()
{
	int a[200];
	int j;
	int b[200];
	int k;
	int c[400];
	int r;
	Nhap(a,b,j,k);
	tron(a,b,c,j,k,r);
	return 0;
}