#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
void LietKe(float[], int);
float DuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}
float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n)
{
	float dd = DuongNhoNhat(a, n);
	if (dd == -1)
{
		cout << "\nKhong co gia tri duong";
		return;
}
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] == dd)
			cout << i << " ";
	}
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	LietKe(b, n);
	return 0;
}