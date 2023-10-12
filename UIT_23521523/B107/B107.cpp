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
int tansuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int timgiatri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (tansuat(a, n, a[i]) > tansuat(a, n, lc))
			lc = a[i];
	return lc;
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	cout<<timgiatri(b, k);
	return 0;
}