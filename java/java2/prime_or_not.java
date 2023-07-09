import java.util.Scanner;

public class prime_or_not {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i;
        System.out.println("Enter a num");
        int a = sc.nextInt();

        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                i = a + 10;
            }
        }

        if (i == a) {
            System.out.println("Prime");
        } else {
            System.out.println("Not Prime");
        }

        sc.close();

    }
}
