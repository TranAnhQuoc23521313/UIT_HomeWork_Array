#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void LietKe(int[], int);
void LietKe(int a[], int n)
{
	if (n <= 1)
{
		return;
}
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0] << " ";
	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << a[i] << " ";
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << a[n - 1];
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