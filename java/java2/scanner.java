import java.util.Scanner;

public class scanner {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your age");
        int x = sc.nextInt();
        System.out.println(x);

        System.out.println("Enter your float");
        float y = sc.nextFloat();
        System.out.println(y);

        System.out.println("Enter your name");
        String n = sc.next();
        System.out.println(n);
        // takes string only upto space ie takes word

        System.out.println("Enter full name");
        String fn = sc.nextLine();
        System.out.println(fn);
        // takes complete sentence

        sc.close();
    }
}