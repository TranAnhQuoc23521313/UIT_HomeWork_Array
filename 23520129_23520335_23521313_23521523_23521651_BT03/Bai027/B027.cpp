#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
float ad;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void AmDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
		{
			ad = a[i];
			return;
		}

	return;

}
void LietKe(int a[], int n)
{
	AmDau(a, n);
	if (ad == 0)
	{
		cout << "Khong co gia tri am";
		return;
	}
    cout << "\nVi tri : ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == ad)
			cout << setw(4) << i;
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	LietKe(b, k);
	return 0;
}