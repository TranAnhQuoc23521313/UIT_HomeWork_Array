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

void daomang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	int temp;
	while (d < c)
	{
		temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}
void daochan(int a[], int n)
{
	int b[100];
	int k=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			b[k++] = a[i];
		
	}
	daomang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];
}
void daole(int a[], int n)
{
	int b[100];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			b[k++] = a[i];
	}
	daomang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];
}
void daochanle(int a[], int n)
{
	daochan(a, n);
	daole(a, n);
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	daochanle(b, k);
	return 0;
}