import java.util.Scanner;

public class Watermelon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        sc.close();
        System.out.println(w!=2 && w%2==0?"YES":"NO");
    }
}