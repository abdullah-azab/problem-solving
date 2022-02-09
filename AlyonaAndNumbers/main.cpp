#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,y,a[5],b[5];
    cin>>x>>y;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=1;i<=x;i++){
        a[i%5]++;
    }
    for(int i=1;i<=y;i++){
        b[i%5]++;
    }
    cout<<(a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1]);
    return 0;
}