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
int TongCon(int a[], int n, int vt, int l)
{
    int s = 0;
    for (int i = 0; i < l; i++)
        s = s + a[vt + i];
    return s;
}

int ktCon(int a[], int n, int vt, int l)
{
    int flag = 1;
    for (int i = 0; i <= l - 1; i++) {
        if (a[vt + i] <=0)
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
int ViTriDuongDau(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            return i;
    return -1;
}
void DuongLonNhat(int a[], int n, int& vtd, int& vtc)
{
    int vt = ViTriDuongDau(a, n);
    if (vt == -1)
    {
        vtd = vtc = -1;
        return;
    }
    int smax = a[vt];
    vtd = vtc = vt;
    for (int l = 1; l <= n; l++) {
        for (int vt = 0; vt <= n - l; vt++) {
            if (ktCon(a, n, vt, l) == 1 &&
                TongCon(a, n, vt, l) > smax)
            {
                vtd = vt;
                vtc = vt + l - 1;
                smax = TongCon(a, n, vt, l);
            }
        }
    }



}

int main()
{
    int vtd, vtc;
    int a[1000];
    int n;
    Nhap(a, n);
    DuongLonNhat(a, n, vtd, vtc);
    return 0;
}