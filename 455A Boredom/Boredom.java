import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.Scanner;

public class Boredom {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int n = sc.nextInt();
            sc.nextLine();
            long a[] = new long[n];
            for (int i = 0; i < n; i++)
                a[i] = sc.nextLong();
            Arrays.sort(a);
            LinkedHashMap<Long, Long> m = new LinkedHashMap<>();
            for (int i = 0; i < n; i++)
                m.compute(a[i], (k, v) -> v == null ? 1 : v + 1);
            long prev_score = 0;
            long prev_prev_score = 0;
            long prev_prev_prev_score = 0;

            long prev_value = -10;
            for (Long key : m.keySet()) {
                long curr = key;
                long count = m.get(key);

                long t = prev_score;

                if (prev_value == curr - 1)
                    prev_score = Math.max(prev_prev_score, prev_prev_prev_score) + curr * count;
                else
                    prev_score = Math.max(prev_score, Math.max(prev_prev_score, prev_prev_prev_score)) + curr * count;
                prev_prev_prev_score = prev_prev_score;
                prev_prev_score = t;
                prev_value = curr;
            }
            System.out.println(Math.max(prev_score, prev_prev_score));
        }
    }
}
