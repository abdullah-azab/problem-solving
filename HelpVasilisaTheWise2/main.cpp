#include <bits/stdc++.h>

using namespace std;
 unordered_map<int,int>* find_possibilities(unordered_map<int,int>* arr,int sum ){

    for(int i=9;i>=1;--i){
        if(sum-i <=9 && sum-i >0 && i != sum-i){
            if(arr->find(i) == arr->end()){
                if(arr->find(sum-i)==arr->end()){
                    (*arr)[i] = sum-i;
                    (*arr)[sum-i] = i;
                }
            }
        }
    }
    return arr;
}
int main() {

    //handle input
    int r1,r2;
    int c1,c2;
    int d1,d2;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    //find possibilities

    unordered_map<int,int>* c1_arr = new unordered_map<int,int>();
    unordered_map<int,int>* c2_arr = new unordered_map<int,int>();
    unordered_map<int,int>* r1_arr = new unordered_map<int,int>();
    unordered_map<int,int>* r2_arr = new unordered_map<int,int>();
    unordered_map<int,int>* d1_arr = new unordered_map<int,int>();
    unordered_map<int,int>* d2_arr = new unordered_map<int,int>();

    c1_arr = find_possibilities( c1_arr,c1) ;
    c2_arr = find_possibilities( c2_arr,c2) ;
    r1_arr = find_possibilities( r1_arr,r1) ;
    r2_arr = find_possibilities( r2_arr,r2) ;
    d1_arr = find_possibilities( d1_arr,d1) ;
    d2_arr = find_possibilities( d2_arr,d2) ;

    //iterate common values to find sol

    for(auto& it_c1 : *c1_arr){
        for(auto& it_c2 : *c2_arr){
            for(auto& it_r1 : *r1_arr){
                for(auto& it_r2 : *r2_arr){
                    for(auto& it_d1 : *d1_arr){
                        for(auto& it_d2 : *d2_arr){

                            if(it_c1.first == it_r1.first
                                && it_c1.second == it_r2.first
                                && it_c2.first == it_r1.second
                                && it_c2.second == it_r2.second
                                && it_d1.first == it_r1.first
                                && it_d1.second == it_r2.second
                                && it_d2.first == it_r1.second
                                && it_d2.second == it_r2.first
                                && it_d1.first == it_c1.first
                                && it_d1.second == it_c2.second
                                && it_d2.first == it_c2.first
                                && it_d2.second == it_c1.second
                            ){
                                cout << it_r1.first << ' ' << it_r1.second << endl;
                                cout << it_r2.first << ' ' << it_r2.second << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "-1"<<endl;
    return 0;
    /*
     * -- brute force
     *  loops  x6
     * -- array of possible pairs for each sum
     *  find common unique values
     * 
     *
     *
     * */
    //    //r1_arr possibilities
//    unordered_map<int,int> r1_arr;
//    for(int i=9;i>=1;--i){
//        if(r1-i <=9 && r1-i <0 && i != r1-i){
//            if(r1_arr.find(i) == r1_arr.end()){
//                if(r1_arr.find(r1-i)==r1_arr.end()){
//                    r1_arr[i]=r1-i;
//                    r1_arr[r1-i]=i;
//                }
//            }
//        }
//    }
}
