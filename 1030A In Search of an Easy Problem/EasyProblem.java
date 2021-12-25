import java.util.Scanner;
public class EasyProblem {
    public static void main(String [] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            for (int i = 0; i < n; i++) {
                if(sc.nextInt() == 1) {
                    System.out.println("HARD");
                    return;
                }
            }
            System.out.println("EASY");
        }
    }
}
