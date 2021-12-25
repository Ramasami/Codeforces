import java.util.Arrays;
import java.util.Scanner;

public class Taxi {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int a[] = new int[5];
            for (int i = 0; i < n; i++) {
                a[sc.nextInt()]++;
            }
            int ans = a[4];
            int min_1_3 = Math.min(a[3], a[1]);
            ans += min_1_3;
            a[3] -= min_1_3;
            a[1] -= min_1_3;
            ans += a[3];
            ans += a[2] / 2;
            a[2] %= 2;
            if (a[2] == 1) {
                ans += 1;
                a[1] -= 2;
            }
            if (a[1] > 0) {
                ans += a[1] / 4;
                ans += a[1] % 4 != 0 ? 1 : 0;
            }
            System.out.println(ans);
        }
    }
}
