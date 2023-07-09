import java.util.Scanner;

public class hamming_dist {
    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st string");
        a = sc.nextInt();
        System.out.println("Enter 2nd string");
        b = sc.nextInt();
        int A, B, hd = 0;
        do {
            A = a % 10;
            B = b % 10;
            if (((A == 1) || (A == 0)) && ((B == 1) || (B == 0))) {
                if (A != B) {
                    hd++;
                }
            } else {
                System.out.println("Invalid input");
                break;
            }
            a /= 10;
            b /= 10;
        } while (a != 0 || b != 0);
        System.out.println("Hamming distance: " + hd);
    }
}