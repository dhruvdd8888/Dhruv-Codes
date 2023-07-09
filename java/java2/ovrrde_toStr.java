class cir1
{
    float x=6.0F;
    public String toString()
    {
        return ""+x;
    }
}

public class ovrrde_toStr {
    public static void main(String[] args) {
        System.out.println("entry");
        cir1 objc = new cir1();
        System.out.println(objc.toString());
    }
}
