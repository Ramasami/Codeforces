import java.util.Scanner;

public class Square{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n =  sc.nextInt();
            int m =  sc.nextInt();
            int a =  sc.nextInt();
            System.out.println((long)(Math.ceil(1.0*n/a)*Math.ceil(1.0*m/a)));
        }
    }
}