import java.util.*;

public class FancyFence {

    public static void main(String[] args) {
        int t = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int i=0;i<t;i++){
            int angle = sc.nextInt();
            double x = 360.0 /(180 - angle);
            int y =(int)x;
            if(x > (double)y){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
    }
}
