#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
int s;
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void TinhTong(int a[], int n)
{
	
	for (int i = 0; i < n; i++)	
		if (a[i] > abs(a[i + 1]))
			s = s + a[i];
	cout << "Tong :";
	cout << s;
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	TinhTong(b, k);
	return 0;
}