import java.util.Arrays;
import java.util.Scanner;

public class QueueAtTheSchool {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            sc.nextInt();
            int t = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int[] line = new int[s.length()];
            for (int i = 0; i < s.length(); i++)
                line[i] = s.charAt(i) == 'B' ? 1 : 0;
            while (t-- > 0) {
                for (int j = 0; j < line.length - 1; j++) {
                    if (line[j] == 1 && line[j + 1] == 0) {
                        line[j] = 0;
                        line[j + 1] = 1;
                        j++;
                    }
                }
            }
            Arrays.stream(line).mapToObj(person -> (person == 1 ? "B" : "G")).forEach(System.out::print);
        }
    }
}
