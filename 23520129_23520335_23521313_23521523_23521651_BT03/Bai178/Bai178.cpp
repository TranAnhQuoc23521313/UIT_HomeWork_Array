#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int ktCon(int[], int, int, int);
int TongCon(int[], int, int, int);
void LietKe(int[], int);
int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}
int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void LietKe(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				cout << TongCon(a, n, vt, l);
				for (int i = 0; i < l; i++)
					cout << setw(8) << a[vt + i];
				cout << "\n";
			}
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