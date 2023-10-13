#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
float Tong(float[], int);
float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++) 
		s += a[i];
	return s;
}
int main()
{
	float b[100];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];
	cout << Tong(b, n);
	return 0;
}