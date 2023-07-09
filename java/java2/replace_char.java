public class replace_char {
    public static void main(String[] args) {
        String a = "Cricket", b;
        b = a.replace('c', '<'); // give changes to b not a
        System.out.println(a);
        System.out.println(b);
        String c, d = "Dhruv Dhana";
        c = d.replace(' ', '+');// coz string are immutable in java
        System.out.println(d);
        System.out.println(c);
        System.out.println(c.replace('+', '_'));
    }
}
