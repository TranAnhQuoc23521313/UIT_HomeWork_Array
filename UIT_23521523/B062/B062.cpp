#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
int dem = 0;
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
void Demsl(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1]))
			dem++;
	}
	cout << "So luong cuc tri:" << dem;
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	Demsl(b, k);
	return 0;
}