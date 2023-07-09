class base {
    base() {
        System.out.println("Parul");
    }
}

class child1 extends base {
    child1() {

        super();
        System.out.println("200303124015");
    }
}

class child2 extends child1 {
    child2() {
        super();
        System.out.println("PIET");
    }
}

public class multilevel_inherit {
    public static void main(String[] args) {
        child2 dhruv = new child2();
        // dhruv.name();
        // dhruv.name();
        // dhruv.name();
    }
}
