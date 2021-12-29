import java.util.*;

public class SerejaAndDima {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            Deque<Integer> d = new LinkedList<>();
            for (int i = 0; i < n; i++)
                d.add(sc.nextInt());
            int sc1 = 0, sc2 = 0;
            int i = 0;
            while (!d.isEmpty()) {
                int l;
                if (d.peekLast() > d.peekFirst())
                    l = d.pollLast();
                else
                    l = d.pollFirst();
                if (i++ % 2 == 0)
                    sc1 += l;
                else
                    sc2 += l;
            }
            System.out.println(sc1 + " " + sc2);
        }
    }
}
