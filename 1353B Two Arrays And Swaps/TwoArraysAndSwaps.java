import java.util.Arrays;
import java.util.Scanner;

public class TwoArraysAndSwaps {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int t = sc.nextInt();
            while (t-- > 0) {
                int n = sc.nextInt();
                int k = sc.nextInt();
                int a[] = new int[n];
                int b[] = new int[n];
                for (int i = 0; i < n; i++)
                    a[i] = sc.nextInt();
                for (int i = 0; i < n; i++)
                    b[i] = sc.nextInt();
                Arrays.sort(a);
                Arrays.sort(b);
                int sum = 0;
                for (int i = n - 1; i >= k; i--)
                    sum += a[i];
                for (int i = k - 1, j = n - 1, l = 0; l < k; l++) {
                    if (a[i] > b[j])
                        sum += a[i--];
                    else
                        sum += b[j--];

                }
                System.out.println(sum);
            }
        }
    }
}
