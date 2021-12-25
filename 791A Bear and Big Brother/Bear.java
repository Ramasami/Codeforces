import java.lang.Math;
import java.util.Scanner;

public class Bear {

    public static void main(String[] str) {
        try (Scanner sc = new Scanner(System.in)) {
            double a = sc.nextInt();
            double b = sc.nextInt();

            double ans = Math.log(b / a) / Math.log(3.0 / 2);
            int floorAns = (int) ans;
            int ceilAns = (int) Math.ceil(ans);
            System.out.println(floorAns == ceilAns ? ceilAns + 1 : ceilAns);
        }
    }
}
