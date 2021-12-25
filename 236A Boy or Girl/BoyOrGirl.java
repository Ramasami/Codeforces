import java.util.Scanner;

import java.util.*;

public class BoyOrGirl {

    public static void main(String[] args) {
        Map<Character,Integer> map = new HashMap<>();
        try(Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            for (int i = 0; i <s.length(); i++) {
                map.compute(s.charAt(i),(k,v)-> {
                    if(v == null)
                        return 1;
                    return v++;
                });
            }
            if(map.size()%2==0)
                System.out.println("CHAT WITH HER!");
            else
                System.out.println("IGNORE HIM!");
        }
    }

}
