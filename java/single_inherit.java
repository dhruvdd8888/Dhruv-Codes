class Base {
    void name() {
        System.out.println("Dhruv");
    }
}

class child extends Base {
    void lname() {
        System.out.println("Dhana");
    }
}

public class single_inherit {
    public static void main(String[] args) {
        child bhavin = new child();
        bhavin.lname();
        bhavin.name();
    }
}
