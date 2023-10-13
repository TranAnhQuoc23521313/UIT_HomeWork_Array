#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
int sl = 0;
int sc = 0;
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Timgtln(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	cout << lc;
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	Timgtln(b, k);
	return 0;
}