#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
bool Kiemtraht(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	else
		return false;
}
int Tim(int a[], int n)
{
	for (int i = n-1; i >=0; i--)
		if (Kiemtraht(a[i]) == true)
			return i;
	return -1;
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	cout << Tim(b, k);
	return 0;
}