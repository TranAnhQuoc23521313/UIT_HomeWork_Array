#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
int sl = 0;
int sc = 0;
using namespace std;
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
float Tim(float a[], int n)
{
	for (int i = n-1; i >=0; i--)
		if (a[i] <0&&a[i]>-1)
			return a[i];
	return 0;
}

int main()
{
	float b[200];
	int k;
	Nhap(b, k);
	cout<<Tim(b, k);
	return 0;
}