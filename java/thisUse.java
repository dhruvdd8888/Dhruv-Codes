class A {
    int a;

    void gdata(int a) {
        this.a = a;
    }

    void show() {
        System.out.println(a);
    }
}

public class xyz {

    public static void main(String[] args) {
        A a = new A();
        a.gdata(4);
        a.show();
    }

}
