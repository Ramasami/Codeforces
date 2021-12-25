import java.util.Scanner;

public class HQ9 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            for (int i = 0; i < s.length(); i++) {
                switch (s.charAt(i)) {
                    case 'H':
                    case 'Q':
                    case '9':
                        System.out.println("YES");
                        return;
                }
            }
            System.out.println("NO");
        }
    }
}
