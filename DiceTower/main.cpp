#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=0;
    int top ,bottom;
    cin >> n;
    cin >> top;
    bottom = 7-top;

    for(int i=0;i<n;i++){
        int left ,right;
        int oleft , oright;
        cin >>left >> right;
        oleft = 7-left;
        oright = 7-right;
        if (bottom == left ||
            bottom == right ||
            bottom == oleft ||
            bottom == oright){
            cout << "NO"<<endl;
            return 0;
        }

    }
    cout <<"YES"<<endl;
    return 0;
}
