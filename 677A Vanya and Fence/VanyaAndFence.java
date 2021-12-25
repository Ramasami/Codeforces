import java.util.Scanner;

public class VanyaAndFence {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n,h;
            n = sc.nextInt();
            h = sc.nextInt();
            int x = 0;
            for (int i = 0; i < n; i++) {
                int a = sc.nextInt();
                if(a>h)
                    x++;
            }
            System.out.println(n+x);
        }
    }
}
