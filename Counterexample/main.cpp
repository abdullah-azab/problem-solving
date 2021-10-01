#include <bits/stdc++.h>

using namespace std;

int main() {

    long long l,a;
    cin >>l>>a;
    if(l %2 != 0){
        l++;
    }
    if(abs(l-a)<2){
        cout <<"-1";
    }else{
        cout <<l<<" "<<l+1<<" "<<l+2<<endl;
    }
    return 0;
}
