#include <bits\stdc++.h>

using namespace std;

int main() {
    int n=0;
    cin >>n;
    bool flg=true;
    char tmp='*';
    char tmp2='*';
    char cur;
    for(int i=0;i< n;i++){
        for(int j=0;j<n;j++){
            cin >>cur;
            if(j==i ||i==n-j-1){
                if(tmp !='*'){
                    if(tmp != cur){
                        flg=false;
                    }
                } else {
                    tmp =cur;
                }
            }else if(tmp2=='*'){
                tmp2 =cur;
            }else{
                if(tmp2 !=cur){
                    flg=false;
                }
            }
        }
    }
    if(tmp==tmp2){
        flg=false;
    }
    if(flg){
        cout <<"YES"<<endl;
    }else{
        cout << "NO"<<endl;
    }
    return 0;
}
