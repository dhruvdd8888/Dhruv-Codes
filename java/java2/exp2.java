class add {
    int a, b;

    void input(int x, int y) {
        a = x;
        b = y;
    }

    void output() {
        System.out.println(a + b);
    }
}

public class exp2 {
    public static void main() {
        add a = new add();
        a.input(5, 7);
        a.output();
        a.input(5, 6);
        a.output();
    }
}
