import java.util.Arrays;
import java.util.Scanner;

public class NearlyLuckyNumber {
    public static void main(String [] args) {
        String s;
        try(Scanner sc = new Scanner(System.in)) {
            s = sc.nextLine();
            long c = Arrays.stream(s.split("")).filter(x->x.equals("4")||x.equals("7")).count();
            if(c == 4 || c== 7)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
