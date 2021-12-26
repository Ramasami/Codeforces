import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;
import java.util.concurrent.atomic.AtomicInteger;

public class Games {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            Map<Integer, Integer> homeColorCount = new HashMap<>();
            Map<Integer, Integer> guestColorCount = new HashMap<>();
            for (int i = 0; i < n; i++) {
                int g = sc.nextInt();
                int h = sc.nextInt();
                homeColorCount.compute(h, Games::increment);
                guestColorCount.compute(g, Games::increment);
            }
            AtomicInteger ans = new AtomicInteger();
            homeColorCount.forEach((color, count) -> {
                if (guestColorCount.containsKey(color)) {
                    ans.getAndAdd(count * guestColorCount.get(color));
                }
            });
            System.out.println(ans.get());
        }
    }

    private static Integer increment(Integer k, Integer v) {
        if (v == null)
            return 1;
        return v + 1;
    }
}
