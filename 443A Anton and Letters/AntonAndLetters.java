import java.util.Arrays;
import java.util.Scanner;

public class AntonAndLetters {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            s = s.substring(1, s.length() - 1);
            if (s.isEmpty())
                System.out.println(0);
            else
                System.out.println(
                        Arrays
                                .stream(s.split(", "))
                                .distinct()
                                .count());
        }
    }
}
