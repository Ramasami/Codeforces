import java.util.Scanner;

public class MinimalSquares {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int t = sc.nextInt();
            while (t-- > 0) {
                int a, b;
                a = sc.nextInt();
                b = sc.nextInt();
                int side = (Math.min(Math.max(2 * a, b), Math.min(Math.max(2 * b, a), a + b)));
                System.out.println(side * side);
            }
        }
    }
}
