import java.util.Scanner;

// abstract class Shape {
//     abstract void area();
// }

class rectangle {
    void area() {
        int l, b;
        Scanner sc = new Scanner(System.in);
        l = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Rectangle area  " + (l * b));
    }
}

class circle {
    void area() {
        int r;
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        System.out.println("Circle area  " + (3.14 * r * r));
    }
}

public class abstract_not {
    public static void main(String[] args) {
        rectangle r = new rectangle();
        r.area();

        circle c = new circle();
        c.area();
    }
}
