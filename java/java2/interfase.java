interface add {
    int a = 9;
    int b = 8;

    public void add(int a, int b);
}

class Addi implements add {
    public void add(int a, int b) {
        System.out.println("Sum " + (a + b));
    }
}

public class interfase {
    public static void main(String[] args) {
        Addi a = new Addi();
        a.add(9, 2);
    }
}
