#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int ViTriLonNhat(int[], int);
int TimChuSo(int[], int);
int ViTriLonNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}
int TimChuSo(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return ViTriLonNhat(dem, 10);
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TimChuSo(b, n);
	return 0;
}