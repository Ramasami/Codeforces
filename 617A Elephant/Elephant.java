import java.util.Scanner;

public class Elephant {
    public static void main(String[] str) {
        try(Scanner sc = new Scanner(System.in)) {
            int x = sc.nextInt();
            System.out.println(((x+4)/5));
        }
    }
}
