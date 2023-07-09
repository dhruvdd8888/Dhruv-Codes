class A {
    void greet() {
        System.out.println("Hello");
    }
}

class B extends A {
    void name() {
        System.out.println("Dhruv");
    }
}

class C extends A {
    void Surename() {
        System.out.println("Dhana");
    }
}

public class hiearchical_inherit {

    public static void main(String[] args) {
        C name1 = new C();
        System.out.println(name1);
    }
}
