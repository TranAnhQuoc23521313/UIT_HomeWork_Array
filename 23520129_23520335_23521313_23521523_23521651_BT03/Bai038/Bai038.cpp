#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int ChuSoDau(int);
int Tong(int[], int);
int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}
int Tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (ChuSoDau(a[i]) & 1)
			s += a[i];
	}
	return s;
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << Tong(b, n);
	return 0;
}