#include <bits\stdc++.h>

using namespace std;

int main() {
    int a=0;
    int b=0;
    int n;
    string tm1;
    string tm2;
    string tmp;
    cin >>n;
    bool flg=false;
    bool flg2=false;
    for(int i =0;i<n;i++){
        cin >>tmp;
        if(flg){
            if(tmp == tm1){
                a++;
            }else if(flg2){
                b++;
            }else{
                b++;
                tm2 =tmp;
                flg2=true;
            }
        }else{
            a++;
            tm1=tmp;
            flg=true;
        }
    }
    if(a>b){
        cout <<tm1<<endl;
    }else{
        cout <<tm2<<endl;
    }
    return 0;
}
