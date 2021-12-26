import java.util.Scanner;

public class IQTest {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < a.length; i++) {
                a[i] = sc.nextInt();
            }
            boolean even = (a[0] % 2 + a[1] % 2 + a[2] % 2) >= 2;
            for (int i = 0; i < a.length; i++) {
                if (!(a[i] % 2 == 0 ^ even)) {
                    System.out.println(i + 1);
                    return;
                }
            }
        }
    }
}
