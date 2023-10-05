#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool KtToanLe(int);
void LietKe(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "Cac chu so toan le trong mang:\n ";
	LietKe(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang A:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

bool KtToanLe(int n)
{
	int flag = true;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t /= 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (KtToanLe(a[i]))
			cout << setw(4) << a[i];
}