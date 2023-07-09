class static_block {
    static int x = 10;

    static void display() {
        System.out.println("Parker");
    }

    static {
        x = 20;
        System.out.println("Hello");
    }

    public static void main(String[] args) {
        System.out.println("Peter");
        display();
        x = 30;
        System.out.println(x);
    }
}