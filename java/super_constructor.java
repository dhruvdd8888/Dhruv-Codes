
class A {
    A() {

    }

    A(int a) {
        System.out.println("Hello ");
    }
}

class B extends A {
    B() {

    }

    B(int a) {
        super(A(9));
    }
}

public class super_constructor {
    public static void main(String[] args) {
        B b = new B(8);
    }
}
