import java.util.Scanner;

public class EvenOdds {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            long n, k;
            n = sc.nextLong();
            k = sc.nextLong() - 1;
            if (n % 2 == 1 && 2 * k == n - 1) {
                System.out.println(n);
                return;
            }
            if (n % 2 == 1 && 2 * k > n - 1) {
                n--;
                k--;
            }
            if (k < n / 2) {
                System.out.println(2 * k + 1);
            } else {
                k -= n / 2 - 1;
                System.out.println(2 * k);
            }
        }
    }
}
