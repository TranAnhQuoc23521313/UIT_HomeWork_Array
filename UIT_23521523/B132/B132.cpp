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
void xaydung(int a[], int n, int b[], int& k)
{
	k = 0;
	for(int i=0;i<n;i++)
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			cout <<setw(4)<< b[k];
			k++;
		}
}
int main()
{
	int a[200];
	int n;
	int b[200];
	int k;
	Nhap(a,n);
	xaydung(a, n, b, k);
	return 0;
}