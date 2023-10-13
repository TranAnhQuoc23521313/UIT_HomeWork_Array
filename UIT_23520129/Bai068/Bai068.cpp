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
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (flag == 1)
			{
				int dem = TanSuat(a, n, a[i]);
				cout << "\nGia tri :" << a[i];
				cout << "(" << dem << ")";
			}
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