import java.util.Scanner;

public class Magnets {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int ans = 0;
            String prev = "00";
            int n = sc.nextInt();
            sc.nextLine();
            while (n-- > 0) {
                String s = sc.nextLine();
                if (!s.equals(prev)) {
                    ans++;
                    prev = s;
                }
            }
            System.out.println(ans);
        }
    }
}
