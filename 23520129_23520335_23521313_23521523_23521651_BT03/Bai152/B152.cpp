#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int a[], int &n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

bool ktnguyento(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;	
	}
	if(dem==2)
        return true;
    return false;

}

void sap(int a[], int n)
{
	int vt = n - 1;
	int temp;
	for(int i=n-1;i>=0;i--)
		if (ktnguyento(a[i])==true)
		{
			temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}
int main()
{
	int b[200];
	int k;
	Nhap(b, k);
	sap(b, k);
	return 0;
}