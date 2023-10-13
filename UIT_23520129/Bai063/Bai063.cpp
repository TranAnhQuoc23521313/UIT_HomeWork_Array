#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int TanSuat(int[], int, int);
void LietKe(int[], int);
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int kq = TanSuat(a, n, a[i]);
		if (kq == 1)
			cout << setw(8) << a[i];
	}
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	LietKe(b, n);
	return 0;
}