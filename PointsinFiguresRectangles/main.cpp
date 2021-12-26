#include <bits/stdc++.h>

using namespace std;

struct rect{
    rect(double dx1, double dy1, double dx2, double dy2) {
        this->x1=dx1;
        this->y1=dy1;
        this->x2=dx2;
        this->y2=dy2;
    }
    double x1,y1;
    double x2,y2;
};
int main() {
    vector <rect *> arr;
    int ptnum = 0;
    bool flg =true;
    while(1){
        char tmp;
        if(ptnum == 0) cin >> tmp;
        if(tmp == 'r' && ptnum==0){
            double tx1,tx2,ty1,ty2;
            cin >>tx1 >>ty1>>tx2>>ty2;
            arr.push_back(new rect(tx1,ty1,tx2,ty2));
        }else{
            ptnum++;
            double x,y;
            cin >>x>>y;
            flg = true;
            if(x == 9999.9 && y == 9999.9){
                return 0;
            }
            for(int i=0;i<arr.size();i++){
                if(x > arr[i]->x1 && x < arr[i]->x2 && y > arr[i]->y1 && y <arr[i]->y2){
                    cout << "Point "<< ptnum <<" is contained in figure "<<i+1<<endl;
                    flg = false;
                }
            }
            if(flg){
                cout <<"Point "<< ptnum <<" is not contained in any figure" << endl;
            }
        }
    }

    return 0;
}
