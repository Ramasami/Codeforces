import java.util.Scanner;

public class Pangram {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            if (s.length() < 26) {
                System.out.println("NO");
            } else {
                int a[] = new int[26];
                for (int i = 0; i < s.length(); i++) {
                    a[Character.toLowerCase(s.charAt(i)) - 'a']++;
                }
                for (int i = 0; i < a.length; i++) {
                    if (a[i] == 0) {
                        System.out.println("NO");
                        return;
                    }
                }
                System.out.println("YES");
            }
        }
    }
}
