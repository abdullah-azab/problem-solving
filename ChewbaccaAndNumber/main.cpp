#include <bits/stdc++.h>

using namespace std;

int main() {

   // handle input
   long long int x;
   cin >>x;

    // num chars
    long long int len,tmp;
    tmp = x;
    len = 0;
    while(tmp!=0){
        len++;
        tmp /= 10;
    }

    tmp = x;
    x = 0;

    for(long long int i=0; i < len; ++i) {

        if ((tmp % 10) >= 5 && i < (len - 1)) {
            x += (long long int)pow( 10,i) * (9 - (tmp % 10));
        } else if((tmp % 10) <= 8  && (tmp % 10) >= 5 && i == (len - 1)){
            x += (long long int)pow( 10,i) * (9 - (tmp % 10));
        }else{
            x += (long long int)pow( 10,i) * (tmp % 10);
        }
        tmp /= 10;
    }

    cout << x << endl;

    return 0;

    /* -- brute force loops
     *  O(n^length)
     * -- min >> invert if original is 9 to 5 , otherwise not worth inverting
     *
     *
     *
     * */
}
