#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
int Chusodau( int n)
{
	int t = abs(n);
	return t % 10;
}
int Tim(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (Chusodau(a[i]) % 2 == 1)
			return a[i];
	return 0;
}
int main()
{
	float b[200];
	int k;
	Nhap(b, k);
	cout << Tim(b, k);
	return 0;
}