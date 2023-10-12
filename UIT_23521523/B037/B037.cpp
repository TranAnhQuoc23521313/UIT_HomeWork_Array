#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
int s ;
int m ;
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
bool KiemTra(int n)
{
	int t = abs(n);
	int dn = 0;
	while(t!=0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}
void TinhTong(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTra(a[i]) == true)
			s = s + a[i];
		else
			m++;
	}
	if (m == n)
		cout << "Ko co gia tri doi xung";
	else {
		cout << "Tong cac gia tri doi xung:";
		cout << s;
	}
}

int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	TinhTong(b, k);
	return 0;
}