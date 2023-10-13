#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int b[1000], c[1000];
	int n, m;
	Nhap(b, n);
	Nhap(c, m);
	cout << "Gia tri chi xuat hien mot lan trong 2 mang: \n";
	LietKe(b, n, c, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}


int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = false;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << setw(4) << a[i];
	}
	for (int i = 0; i < m; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (b[i] == b[j])
				flag = false;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << setw(4) << b[i];
	}
}