#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin >>n>>k;
    long double x,y,a,b;
    long double len = 0.0000000000000000;
    cin >>a>>b;
    for (int i=0;i<n-1;i++) {
        cin >>x>>y;
        len += sqrtl((long double)((x-a)*(x-a) + (y-b)*(y-b)));
        a=x;
        b=y;
    }
    long double ans =(len * k )/50.0;
    cout << setprecision(8);
    cout << ans << endl;
    return 0;
}
