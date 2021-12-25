import java.util.Scanner;

public class Team {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)) {
            int t = sc.nextInt();
            sc.nextLine();
            int ans = 0;
            while(t-->0) {
                int k = 0;
                k+=sc.nextInt();
                k+=sc.nextInt();
                k+=sc.nextInt();
                sc.nextLine();
                if(k>=2)
                    ans++;
            }
            System.out.println(ans);
        }
    }
}
