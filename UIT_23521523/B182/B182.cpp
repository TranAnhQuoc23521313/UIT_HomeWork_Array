#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(int a[], int& n)
{
    cout << "Nhap n:";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
int ktCon(int a[], int n, int vt, int l)
{
    int flag = 1;
    for (int i = 0; i <= l - 2; i++) {
        if (a[vt + i] > a[vt + i + 1])
            flag = 0;
    }
    return flag;
}
int LonNhat(int a[], int n)
{
    int lc = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > lc)
            lc = a[i];
    return lc;
}

void LietKe(int a[], int n)
{
    int ln = LonNhat(a, n);
    for (int l = 1; l <= n; l++)
    {
        for (int vt = 0; vt <= n - l; vt++)
        {
            if (ktCon(a, n, vt, l) == 1&&a[vt+l-1]==ln)
            {
                for (int i = 0; i < l-1; i++)
                    cout << setw(3) << a[vt + i];
                cout << "\n";
            }
        }
    }
}
int main()
{
    int b[200];
    int k;
    Nhap(b, k);
    LietKe(b, k);
    return 0;
}