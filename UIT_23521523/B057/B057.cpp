#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
int sl=0;
int sc = 0;
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
	{
		if (a[i] % 2 == 0)
			sc++;
		else
			sl++;
	}
	if (sc >= sl)
	{
		if (sc == sl)
			cout << "So chan bang so le";
		else
			cout << "So chan nhieu hon so le";
	}
	else
		cout << "So chan it hon so le";
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	Demsl(b, k);
	return 0;
}