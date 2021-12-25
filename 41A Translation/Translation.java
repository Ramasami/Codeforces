import java.util.Scanner;

public class Translation {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s1, s2;
            s1 = sc.nextLine();
            s2 = sc.nextLine();
            StringBuilder sb = new StringBuilder(s1);
            System.out.println(sb.reverse().toString().equals(s2) ? "YES" : "NO");
        }
    }
}
