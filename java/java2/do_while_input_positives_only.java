import java.util.Scanner;

public class do_while_input_positives_only {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i;
        do {
            System.out.println("Enter a num");
            i = sc.nextInt();
        } while (i >= 0);
        System.out.println("You entered a negative num");
        sc.close();
    }
}
