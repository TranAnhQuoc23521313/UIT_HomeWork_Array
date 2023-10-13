#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int ktDoiXung(int[], int);
int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
 }
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << ktDoiXung(b, n);
	return 0;
}