#include <bits\stdc++.h>

using namespace std;

int main() {

    // input parameters
    int n,k;
    cin >> n>> k;
    int  points [(2*n)+1];
    for(int i=1;i<=((2*n)+1);++i){
        cin >> points[i-1];
    }

    // loop mountain  peaks
    for(int i=2;i<= (2*n) && k > 0;++i){
        if( points[i-2] < points[i-1]
            && points[i] < points[i-1]
            && i % 2 ==0 ){
            if (points[i-1]-points[i-2]  >1
                && points[i-1]-points[i] >1 ){
                points[i-1]-=1;
                k--;
            }
        }
    }

    //print original picture
    for(int i=1;i<=((2*n)+1);++i){
        cout << points[i-1]<<' ';
    }

    return 0;
}
