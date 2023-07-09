class ex extends Exception
{
    ex(String s)
    {
        super(s);
    }
}
class Age
{
    void check(int a) throws ex
    {
        if(a<19)
        {
            throw new ex("Not eligible");
        }
        else
        {
            System.out.println("Eligible");
        }
        
    }
}

public class throws_custom_except {
    public static void main(String[] args) {
     Age a = new Age();
    try
    {
        a.check(15);   
    }
    catch(Exception e)
    {
        System.out.println(e);
    }
    }
    
}
