import java.util.Arrays;
import java.util.Scanner;

public class Laptop {

    private int price;
    private int quality;

    private Laptop(int price, int quality) {
        this.price = price;
        this.quality = quality;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            Laptop[] laptops = new Laptop[n];
            for (int i = 0; i < n; i++) {
                int p = sc.nextInt();
                int q = sc.nextInt();
                laptops[i] = new Laptop(p, q);
            }
            Arrays.sort(laptops, (o1, o2) -> {
                if (o1.price != o2.price)
                    return o1.price - o2.price;
                return o1.quality - o2.quality;
            });
            Laptop max = laptops[0];
            boolean found = false;
            for (int i = 1; i < laptops.length; i++) {
                if (laptops[i - 1].price == laptops[i].price && (i == n - 1 || laptops[i].price == laptops[i + 1].price))
                    continue;
                if (laptops[i].price != max.price && laptops[i].quality < max.quality) {
                    found = true;
                    break;
                } else if(laptops[i].quality > max.quality)
                    max = laptops[i];
            }
            if(found)
                System.out.println("Happy Alex");
            else
                System.out.println("Poor Alex");
        }
    }

    @Override
    public String toString() {
        return String.format("(%s %s)", this.price, this.quality);
    }
}
