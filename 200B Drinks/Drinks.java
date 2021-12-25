import java.util.Scanner;

public class Drinks {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int x = 0;
            for (int i = 0; i < n; i++) {
                x += sc.nextInt();
            }
            System.out.println(1.0 * x / n);
        }
    }
}
