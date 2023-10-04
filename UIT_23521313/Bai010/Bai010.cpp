#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

string getInputFileName(int);
string getOutputFileName(int);
void Nhap(int[], int&, string);
void Xuat(int[], int, string);
void Xuat(int[], int);
bool KiemTra(int[], int);

int main()
{
	int b[100000];
	int n;
	for (int i = 1; i <= 13; i++)
	{
		string FileName = getInputFileName(i);
		Nhap(b, n, FileName);

		cout << "\n" << FileName << endl;
		Xuat(b, n);

		FileName = getOutputFileName(i);
		Xuat(b, n, FileName);

		if (KiemTra(b, n))
			cout << "\nMang co." << endl;
		else
			cout << "\nMang khong co." << endl;
	}
	return 0;
}

string getInputFileName(int n)
{
	string filename = string("intdata");
	if (n < 10)
		filename += "0" + to_string(n) + ".inp";
	else
		filename += to_string(n) + ".inp";
	return filename;
}

string getOutputFileName(int n)
{
	string filename = string("intdata");
	if (n < 10)
		filename += "0" + to_string(n) + ".out";
	else
		filename += to_string(n) + ".out";
	return filename;
}

void Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}

void Xuat(int a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(4) << a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

bool KiemTra(int a[], int n)
{
	bool flag = false;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] < 2004)
			flag = true;
	return flag;
}