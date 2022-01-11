package com.problem;

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // input n , k
        char arr[] = {'0','1','2','3','4','5','6','7','8','9'};
        int n,k;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        int res = 0;
        sc.nextLine();//clear new line symbol
        //loop n times for input
        for(int i=0;i<n;i++){
            String tmp =sc.nextLine();
            // sort if k+1 ( +1 for zero) or more
            if( tmp.length() >= (k+1)){
                char[] tmparr = tmp.toCharArray();
                Arrays.sort(tmparr);
                //check all- k or lower- numbers exist
                boolean flg = true;
                int c = 0;
                for (int j = 0; j < tmp.length(); j++) {

                    if(j > 0){
                        //new char detected
                        if(tmparr[j] != tmparr[j-1] ){
                            //is next char up
                            if (arr[c] != tmparr[j]) {
                                flg = false;
                            }else if(c <= k){
                                c++;
                            }
                        }
                    }else{
                        if (arr[c] != tmparr[j]) {
                            flg = false;
                        }else if(c <= k){
                            c++;
                        }
                    }
                }
                if (c == (k+1)) {
                    res += 1;
                }
            }
        }

        //print sum
        System.out.println(res);
    }
}
