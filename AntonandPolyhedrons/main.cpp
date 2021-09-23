#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string tmp;
    unordered_map <string,int> dat;
    int sum=0;

    dat["Tetrahedron"]=4;
    dat["Cube"]=6;
    dat["Octahedron"]=8;
    dat["Dodecahedron"]=12;
    dat["Icosahedron"]=20;

    cin >>n;
    for(int i=0;i<n;i++){
        cin >>tmp;
        sum += dat[tmp];
    }
    cout << sum;
    return 0;
}
