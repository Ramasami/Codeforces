import java.util.Scanner;

public class NextRound {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            sc.nextLine();
            int kValue = 0;
            for (int i = 0; i < n; i++) {
                int v = sc.nextInt();
                if (v <= 0) {
                    System.out.println(i);
                    return;
                } else if (i == k - 1) {
                    kValue = v;
                } else if (i >= k) {
                    if (v != kValue) {
                        System.out.println(i);
                        return;
                    }
                }
            }
            System.out.println(n);
        }
    }
}
