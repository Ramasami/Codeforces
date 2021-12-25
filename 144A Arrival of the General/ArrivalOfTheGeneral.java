import java.util.Scanner;

public class ArrivalOfTheGeneral {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < a.length; i++)
                a[i] = sc.nextInt();
            int max = 0;
            int min = 0;
            for (int i = 1; i < a.length; i++) {
                if (a[i] > a[max])
                    max = i;
                if (a[i] <= a[min])
                    min = i;
            }
            if (max > min)
                max--;
            System.out.println(max + n - min -1);
        }
    }
}
