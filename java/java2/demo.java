public class demo {

    public void finalise() {
        System.out.println("Hello Peter");
    }

    public static void main(String[] args) {
        demo obj = new demo();
        obj.finalise();
        System.gc(); // gc for
        demo obj2 = new demo();
        obj2.finalise();
    }
}
