import java.util.Scanner;

public class BeautifulYear {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int y = sc.nextInt();
            y++;
            int[] d = new int[4];
            for (int i = 0, j = 1000; i < 4; i++) {
                d[i] = y / j;
                y %= j;
                j /= 10;
            }
            func(d, 1);
            print(d);
        }
    }

    private static void print(int[] d) {
        for (int i : d) {
            System.out.print(i);
        }
        System.out.println();
    }

    private static void func(int[] d, int n) {
        if (n == 4)
            return;
        if (d[n] == 10) {
            d[n] = 0;
            d[n - 1]++;
            func(d, n - 1);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (d[i] == d[n]) {
                d[n]++;
                for (int j = n + 1; j < 4; j++) {
                    d[j] = 0;
                }
                func(d, n);
                return;
            }
        }
        func(d, n + 1);
    }
}
