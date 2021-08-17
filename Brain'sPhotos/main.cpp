#include <bits\stdc++.h>

using namespace std;

int main() {
    int row=0;
    int column =0;
    bool black=true;
    cin >>row >>column;
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            string tmp;
            cin >>tmp;
            if(tmp[0]=='C' ||tmp[0]=='M' ||tmp[0]=='Y'){
                black=false;
            }
        }
    }
    if(black){
        cout <<"#Black&White"<<endl;
    }else{
        cout <<"#Color"<<endl;
    }
    return 0;
}
