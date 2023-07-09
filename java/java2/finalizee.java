public class finalizee {

    public void fialise() {
        System.out.println("Hello World");
    }

    public static void main(String[] args) {
        finalizee obj = new finalizee();
        obj.fialise();
        finalizee obj2 = new finalizee();
        obj.fialise();
        finalizee obj3 = new finalizee();
        obj.fialise();
        System.gc(); // gc for garbage collection
    }
}