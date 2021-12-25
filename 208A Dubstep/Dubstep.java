import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Collectors;

public class Dubstep {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            System.out
                    .println(
                            Arrays
                                    .stream(s.split("(WUB)+"))
                                    .filter(x -> !x.isEmpty())
                                    .collect(Collectors.joining(" ")));
        }
    }
}
