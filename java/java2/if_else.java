import java.util.Scanner;

public class if_else {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("enter your age");
        int a = s.nextInt();
        if (a > 18) {
            System.out.print("welcome");
            System.out.println("  to vote");
        } else {
            System.out.println("bye bye");
            System.out.println("cant vote");
        }

        s.close();
    }

}
