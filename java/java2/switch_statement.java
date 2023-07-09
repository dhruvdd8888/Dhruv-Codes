import java.util.Scanner;

public class switch_statement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 5, b = 2;
        int opr;
        System.out.println("Enter opr");
        opr = sc.nextInt();

        switch (opr) {
            case 1: {
                System.out.println(a + b);
                break;
            }
            case 2: {
                System.out.println(a - b);
                break;
            }
            case 3: {
                System.out.println(a * b);
                break;
            }
            case 4: {
                System.out.println(a / b);
                break;
            }
            default: {
                System.out.println("Enter valid opr");
            }
        }
        sc.close();
    }
}
