import java.util.Scanner;

public class Mathematician {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String a = sc.nextLine();
            String b = sc.nextLine();
            for (int i = 0; i < a.length(); i++) {
                if (a.charAt(i) == b.charAt(i))
                    System.out.print(0);
                else
                    System.out.print(1);
            }
        }
    }
}
