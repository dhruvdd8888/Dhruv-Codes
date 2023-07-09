import java.util.Scanner;


class exceptio {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int a, b;
            System.out.println("Enter a num");
            a = sc.nextInt();
            System.out.println("Enter 2nd num");
            b = sc.nextInt();
            System.out.println("Division is " + a / b);
        } catch (Exception ex) {
            System.out.println("infinite");
        }
        System.out.println("THE END");
        sc.close();
    }
}
