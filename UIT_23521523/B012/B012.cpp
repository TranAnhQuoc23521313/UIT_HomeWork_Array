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
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void LietKe(int a[], int n)
{
	cout << "Vi tri so le:";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			cout << setw(4)<< i;
}
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	LietKe(b, k);
	return 0;
}