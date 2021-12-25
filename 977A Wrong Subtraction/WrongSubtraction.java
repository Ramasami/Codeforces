import java.util.Scanner;

public class WrongSubtraction {
    public static void main(String [] args) {
        try (Scanner sc = new Scanner(System.in)) {
            long n = sc.nextLong();
            int k = sc.nextInt();
            while(k>0) {
                int x = (int)(n%10);
                if(x+1<=k) {
                    k-=(x+1);
                    n/=10;
                } else {
                    n-=k;
                    k=0;
                }
            }
            System.out.println(n);
        }

    }
}
