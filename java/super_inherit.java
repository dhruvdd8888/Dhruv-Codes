class A {
    int a = 5;

    void show() {
        System.out.println("Helpeter");
    }
}

class B extends A {
    int a = 90;

    void show() {
        System.out.println("Hello peter");
    }
}

class C extends B {
    int a = 110;

    void display() {
        System.out.println(a);
        System.out.println(super.a);
        show();
    }
}

public class super_inherit {
    public static void main(String[] args) {
        C c = new C();
        c.display();

    }
}
