interface a {
    void show0();
}

interface b extends a {
    void show1();
}

interface c extends b {
    void show2();
}

interface d extends c {
    void show3();
}

class cc implements d {
    public void show3() {
        System.out.println("Hello tobey");
    }

    public void show2() {
        System.out.println("Hello peter");
    }

    
    public void show1() {
        System.out.println("Hello andrew");
    }

    // @Override
    public void show0() {
        System.out.println("Hello tom");
    }
}

public class multipath_inherit {
    public static void main(String[] args) {
        cc obj = new cc();
        obj.show0();
        obj.show1();
        obj.show2();
        obj.show3();
    }

}
