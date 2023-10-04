#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang A ban dau: ";
	Xuat(b, k);
	int kq = DemNguyenTo(b, k);
	cout << "\nKet qua: " << kq;

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem += 1;
	if (dem == 2)
		return true;
	return false;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 100 && ktNguyenTo(a[i]))
			dem += 1;
	return dem;
}