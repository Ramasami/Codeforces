import java.util.Scanner;

public class Presents {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n;
            n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                int x = sc.nextInt() - 1;
                a[x] = i + 1;
            }
            for (int i : a) {
                System.out.print(i + " ");
            }
        }

    }
}
