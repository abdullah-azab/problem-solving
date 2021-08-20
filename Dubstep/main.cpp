#include <bits\stdc++.h>

using namespace std;

int main() {
    string in;
    cin >>in;
    if(in.length()>3){
    for(int i=0;i<in.length()-2;i++){
        if(in[i]=='W' &&in[i+1]=='U'&&in[i+2]=='B'){
            in[i]=in[i+1]=in[i+2]='*';
        }
    }
    }
    bool flg=false;
    bool flg2=false;
    bool flg3 =false;
    bool flg4 =false;
    for(int i=0;i<in.length();i++){
        /* first letter check */
    if(!flg &&in[i]!='*'){
        flg=true;
        cout <<in[i];
    }else if(flg && in[i]=='*'){
        /* check middle wub to replace with space*/
        flg2=true;
    }else if(flg && flg2 && in[i]!='*'){
        flg2=false;
        cout <<' '<<in[i];
    }else if(flg && !flg2 && in[i]!='*'){
        cout << in[i];
    }
    }
    return 0;
}
