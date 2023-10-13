#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void ConLonNhat(float[], int, int&, int&);
float TongCon(float[], int, int, int);
float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
			vtd = vt;
			vtc = vt + l - 1;
			sln = TongCon(a, n, vt, l);
			for (int i = vtd; i <= vtc; i++)
				cout << a[i] << " ";
			}
}
int main()
{
	float b[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	int vtd;

	int vtc;
	for (int i = 0; i <= n - 1; i++)
		cin >> b[i];

	ConLonNhat(b, n, vtd, vtc);
	return 0;
}