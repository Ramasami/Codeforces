import java.util.*;

public class RestoreThePermutationByMerger {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int t = sc.nextInt();
            while (t-- > 0) {
                int n = sc.nextInt();
                Set<Integer> s = new HashSet<>();
                List<Integer> l = new LinkedList<>();
                int x;
                for (int i = 0; i < 2*n; i++) {
                    x = sc.nextInt();
                    if(s.add(x)) {
                        l.add(x);
                    }
                }
                l.forEach(i->System.out.print(i+" "));
                System.out.println();
            }
        }
    }
}
