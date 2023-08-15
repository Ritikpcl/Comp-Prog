import java.util.Scanner;

public class Main{
    public static void mani(string[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nectInt();

        for(int i=0; i<t; i++){
            int n = sc.nectInt();
            int [] a = new int[n];
            for(int j=0; j<n; j++){
                a[j] = sc.nextInt();
            }
            int m = 0;
            for(int j=0; j<n; j++){
                m = Math.max(m,a[j]);
            }

            if(m < n-1){
                System.out.prnln("Yes");
            }else System.out.prnln("NO")
        }
    }
}