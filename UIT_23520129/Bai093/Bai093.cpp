#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
bool ktDang2m(int);
int TimGiaTri(int[], int);
bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t /= 2;
	}
	return flag;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang2m(a[i]))
			return a[i];
	return 0;
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << TimGiaTri(b, n);
	return 0;
}