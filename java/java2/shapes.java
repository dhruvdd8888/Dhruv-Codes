import java.util.Scanner;

class square {
    int l;

    void ip() {
        Scanner sc = new Scanner(System.in);
        l = sc.nextInt();
    }

    void area() {
        System.out.println(l * l);
    }

    void volume() {
        System.out.println(l * l * l);
    }
}

class circle {
    int r;

    void ip() {
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
    }

    void area() {
        System.out.println(3.14 * r * r);
    }

    void volume() {
        System.out.println(4 * 3.14 * r * r * r / 3);
    }
}

class box {
    int l, b, h;

    void ip() {
        Scanner sc = new Scanner(System.in);
        l = sc.nextInt();
        b = sc.nextInt();
        h = sc.nextInt();
    }

    void area() {
        System.out.println(2 * ((l * b) + (b * h) + (l * h)));
    }

    void volume() {
        System.out.println(l * b * h);
    }
}

public class shapes {
    public static void main(String[] args) {
        circle c = new circle();
        square s = new square();
        box b = new box();

        System.out.println("circle");
        c.ip();
        c.area();
        c.volume();

        System.out.println("square");
        s.ip();
        s.area();
        s.volume();

        System.out.println("box");
        b.ip();
        b.area();
        b.volume();

    }
}
