#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
bool ktNguyenTo(int);
void LietKe(int[], int);
bool ktNguyenTo(int k)
{
	 int dem = 0;
	 for (int i = 1; i <= k; i++)
		 if (k % i == 0)
			dem++;
	 if (dem == 2)
		return true;
	 return false;
}
void LietKe(int a[], int n)
{

	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
		if (ktNguyenTo(a[i]))
			cout << i;
	}
}
int main()
{
	int b[100];
	int n;
	cin >> n;
	LietKe(b, n);
	return 0;
}