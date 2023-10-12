#include <iostream>
#include <iomanip> 

using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Cac mang con co do dai lon hon 2: \n";
	LietKe(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(int a[], int n)
{
	for (int l = 3; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			for (int i = 0; i < l; i++)
				cout << setw(8) << a[vt + i];
			cout << "\n";
		}
	}
}