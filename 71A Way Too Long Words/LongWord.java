import java.util.Scanner;

public class LongWord {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            Integer t = sc.nextInt();
            sc.nextLine();
            while (t-- > 0) {
                String line = sc.nextLine();
                int n = line.length();
                if (n>10)
                    System.out.println(line.charAt(0) + String.valueOf(n - 2) + line.charAt(n - 1));
                else
                    System.out.println(line);
            }
        }
    }
}