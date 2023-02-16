#include<iostream>
#define Max 100
using namespace std;

void nhapMang(int a[], int &n)
{
    cout<< "nhap n = ";
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] =";
        cin >> a[i];
    }
}
void timKiem(int a[], int n, int x)
{
    int vt = -1 ;
    for(int i = 0; i < n; i++)
    if (a[i] == x){
    vt = i;
    break;
    }
    if (vt < n && vt == -1 ){
    cout << "ttee" <<endl;
    }else {
    cout << "tt"   << endl;
   // cout << vt;
    }
}
void XuatMang(const int a[], const int n) 
{
    for(int i = 0; i < n; i++)
    cout << a[i] <<"\t";
    cout << endl;
}
int main(){
int a[Max];
int n,x,vt;
nhapMang(a, n);
XuatMang(a, n);
cout << "nhap x = ";
cin >> x;
timKiem(a, n, x);
// if (vt != NULL || vt >= 0)
//     cout << "tt"<< vt<< x <<endl;
//     else 
//     cout << "ktt" << vt << x << endl;
return 0;
}