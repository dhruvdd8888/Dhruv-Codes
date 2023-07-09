class c
{
    c()
    {
        System.out.println("Default constructor");
    }
    void m()
    {
        System.out.println("Default c");
    }
}
public class obj_not_refernce {
    public static void main(String[] args) {
        new c().m();
        // c o;
        System.out.println("Done");
    }
}
