interface i {
    int a = 6;
    int b = 5;

    public void add(int a, int b);
}

interface j {
    int x = 5;
    int y = 3;

    public void mul(int x, int y);
}

class A implements i, j {
    public void add(int a, int b) {
        System.out.println("Sum " + (a + b));
    }

    public void mul(int x, int y) {
        System.out.println("Multiplication " + (x * y));
    }
}

public class multiple_inherit {
    public static void main(String[] args) {
        A a = new A();
        a.add(7, 8);
        a.mul(4, 3);
    }

}
