public class multi_catch {
    public static void main(String[] args) {
        try {
            int a=3, b=0;
            System.out.println("Division is " + a / b);
        }
        catch (ArrayIndexOutOfBoundsException ex)
        {
            System.out.println("index");
        }
        
        catch (ArithmeticException ex)
        {
            System.out.println("infinite");
        }
        catch (Exception ex) {
            System.out.println("exception");
        }
        System.out.println("THE END");
        
    }    
}
