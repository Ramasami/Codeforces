import java.util.Scanner;

public class NewYearTransportation {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int t = sc.nextInt();
            int curr = 1;
            int i = 1;
            while (i <= n) {
                int x = sc.nextInt();
                if (curr == i) {
                    curr += x;
                }
                if (curr == t) {
                    System.out.println("YES");
                    return;
                } else if (curr > t) {
                    System.out.println("NO");
                    return;
                }
                i++;
            }
            System.out.println("NO");
        }
    }
}
