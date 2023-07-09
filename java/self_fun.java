import Simple.main;

public class self_fun{

    public static void cs(){
        System.out.println("dvedb");
    }
    public static void main(String[] args) {

        System.out.println("vdv");
        self_fun sss=new self_fun();
        self_fun.cs();
    }
}