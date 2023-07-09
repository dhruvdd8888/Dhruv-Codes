import java.util.Scanner;

class add {
    int a, b;

    void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 nums");
        a = sc.nextInt();
        b = sc.nextInt();
    }

    void output() {
        System.out.println(a + b);
    }
}

public class add_class {
    public static void main(String[] args) {
        add a = new add();
        a.input();
        a.output();
    }
}
