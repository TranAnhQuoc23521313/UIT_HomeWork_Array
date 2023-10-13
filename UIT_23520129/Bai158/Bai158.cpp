#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void DichTrai(float[], int);
void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	DichTrai(b, n);
	return 0;
}