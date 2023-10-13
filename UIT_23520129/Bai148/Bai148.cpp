#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
float LonNhat(float[], int);
float NhoNhat(float[], int);
void BienDoi(float[], int);
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void BienDoi(float a[], int n)
{
	float ln = LonNhat(a, n);
	float nn = NhoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == ln || a[i] == nn)
			a[i] = ln + nn - a[i];
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}
int main()
{ 
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	BienDoi(b, n);
	return 0;
}