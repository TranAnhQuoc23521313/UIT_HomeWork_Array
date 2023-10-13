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
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void sapgiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < a[j])
		HoanVi(a[i], a[j]);

for (int i = 0; i < n; i++)
	cout << setw(5) << a[i];
}
int main()
{
	int b[200];
	int n;
	Nhap(b, n);
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	sapgiam(b, n);
	return 0;
}