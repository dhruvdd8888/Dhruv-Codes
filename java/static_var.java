class test {
    int a, b;
    static int c = 60;

    void show(int a, int b) {
        this.a = a;
        this.b = b;
    }
}

public class static_var {
    int x, y;
    static int z = 10;

    static void display() {
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    }

    public static void main(String[] args) {
        static_var xyz = new static_var();
        static_var.z = 40;

    }
}
