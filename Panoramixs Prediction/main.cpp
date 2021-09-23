#include <bits/stdc++.h>

using namespace std;

// school optimized method
// read https://www.geeksforgeeks.org/primality-test-set-1-introduction-and-school-method/
// read https://en.wikipedia.org/wiki/Primality_test
// https://www.geeksforgeeks.org/c-program-to-check-prime-number/
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    //we need only check till √n
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main() {
int n;
int m;
cin >>n>>m;
for(int i=n+1;i<=m;i++){
    if(isPrime(i) && i!=m){
        cout <<"NO";
        return 0;
    }else if(isPrime(i) && i==m){
        cout << "YES";
        return 0;
    }
}
cout <<"NO";
    return 0;
}
