import java.util.Scanner;

abstract class Shape {
     abstract void area();
}

class rectangle extends Shape {
    void area() {
        int l, b;
        Scanner sc = new Scanner(System.in);
        l = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Rectangle area  " + (l * b));
    }
}

class triangle extends Shape {
    void area() {
        int a, b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Triangle area  " + (0.5 * a * b));
    }
}

class circlee extends Shape {
    int aa=567;
    void area() {
        super.area();
        int r;
        System.out.println("vdv");
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        System.out.println("Circle area  " + (3.14 * r * r));
    }
}

public class abstract_class {
    public static void main(String[] args) {
        // rectangle r = new rectangle();
        // r.area();
        // System.out.println("vdv");
        
        // circlee c = new circlee();
        // c.area();
        
        Shape ss=new circlee();
        ss.area();
        // System.out.println(ss.a);
        // System.out.println("vdv");
m
        // triangle t = new triangle();
        // t.area();
    }
}
