import java.util.Scanner;

public class RequiredRemainder {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int t = sc.nextInt();
            while (t-- > 0) {
                long x, y, n;
                x = sc.nextLong();
                y = sc.nextLong();
                n = sc.nextLong();
                long z = n / x;
                if (z * x + y <= n)
                    System.out.println(z * x + y);
                else
                    System.out.println(z * x + y - x);
            }
        }
    }
}