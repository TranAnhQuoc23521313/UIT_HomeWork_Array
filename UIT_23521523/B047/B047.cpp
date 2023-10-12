#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
float s;
int m=0;
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Tinhtbc(int a[], int n,float x)
{

	for (int i = 0; i < n; i++)
		if (a[i] > x)
		{
			s = s + a[i];
			m++;
		}
	float tbc = s / m;
	cout << "Trung binh cong :";
	cout << tbc;
}

int main()
{
	int b[200];
	int k;
	float x;
	cout << "Nhap x:";
	cin >> x;
	Nhap(b, k);
	Tinh(b, k, x);
	return 0;
}