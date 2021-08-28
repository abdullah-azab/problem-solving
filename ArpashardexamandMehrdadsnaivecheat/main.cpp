#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4]= {8,4,2,6};
    long long n;
    cin >>n;
    if(n % 4 > 0){
        cout << arr[(n % 4) - 1] << endl;
    }else if( n == 0){
        cout << 1 <<endl;
    }else{
        cout << arr[3] << endl;
    }
    return 0;
}
