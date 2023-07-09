import java.util.Scanner;

public class fibo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = 0, y = 1;
        int z = x + y;
        System.out.println("Enter num");
        int a = sc.nextInt();

        System.out.print(x + ", " + y);
        for (int i = 0; i < a - 2; i++) {
            System.out.print(", " + z);
            x = z;
            z = z + y;
            y = x;
        }
        sc.close();
    }
}
