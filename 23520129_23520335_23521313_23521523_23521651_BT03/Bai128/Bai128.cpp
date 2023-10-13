#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int ktBang(float[], int);
int ktBang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != a[0])
			flag = 0;
	return flag;
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << ktBang(b, n);
	return 0;
}