#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
bool ktChinhPhuong(int);
int ChinhPhuongDau(int[], int);
bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
int ChinhPhuongDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]))
			return a[i];
	return -1;
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << ChinhPhuongDau(b, n);
	return 0;
}