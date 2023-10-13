#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
float s;
int dem = 0;
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Demsl(int a[], int n)
{

	for (int i = 0; i < n; i++)
		if (a[i]%10==5)
     		dem++;
	cout << "So luong gia tri co chu so tan cung bang 5 :";
	cout << dem;
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	Demsl(b, k);
	return 0;
}