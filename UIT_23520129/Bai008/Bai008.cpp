#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int ChuSoDau(int);
void LietKe(int[], int);
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << a[i] << ' ';
	}
}
int main()
{
	int b[100];
	int c;
	cin >> c;
	LietKe(b, c);
	return 0;
}
