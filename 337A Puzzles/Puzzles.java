import java.util.Arrays;
import java.util.Scanner;

public class Puzzles {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n, m;
            n = sc.nextInt();
            m = sc.nextInt();
            int a[] = new int[m];
            for (int i = 0; i < m; i++) {
                a[i] = sc.nextInt();
            }
            Arrays.sort(a);
            int min = Integer.MAX_VALUE;
            for (int i = 0; i + n - 1 < m; i++) {
                min = Math.min(a[i + n - 1] - a[i], min);
            }
            System.out.println(min);
        }
    }
}
