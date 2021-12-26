import java.util.Scanner;

public class HitTheLottery {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            long n = sc.nextInt();
            int ans = 0;
            int d[] = { 100, 20, 10, 5, 1 };
            for (int i : d) {
                ans += n / i;
                n %= i;
            }
            System.out.println(ans);
        }
    }
}
