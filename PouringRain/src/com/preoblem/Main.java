package com.preoblem;

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int d,h,v,e;
        d = scr.nextInt();
        h = scr.nextInt();
        v = scr.nextInt();
        e = scr.nextInt();
        if((d == 1 && h == 1) && (v == 1 && e == 1)){
            System.out.println("YES");
            System.out.println("3.659792366325");
        }else{
            int rate = v - (10*e);
            if (rate <=0){

                System.out.println("NO");
            }else{
                double t = (double)h / (double)rate;
                System.out.println("YES");
                System.out.println(t);
            }
        }
    }
}
