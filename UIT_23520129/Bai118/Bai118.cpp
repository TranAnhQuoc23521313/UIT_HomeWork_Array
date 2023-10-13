#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int ktTonTai(int[], int);
int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == 0 && a[i + 1] == 0)
			flag = 1;
	return flag;
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << ktTonTai(b, n);
	return 0;
}
