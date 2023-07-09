class A {
    void show() {
        System.out.println("Hell of A");
    }

    // void cap() {
    // System.out.println("Cap of B");
    // }
}

class B extends A {
    void show() {
        System.out.println("Hell of B");
    }

    // void spidey() {
    // System.out.println("spidey of B");
    // }

    // void cap() {
    // System.out.println("cap of B");
    // }
}

public class dynamic_method_dispatch {
    public static void main(String[] args) {
        B bo = new B();
        A ao = new A();
        bo.show();
        ao.show();
        ao = bo;
        ao.show();
        // ao.cap();
    }
}
