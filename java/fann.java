import java.util.Scanner;

class fan1{
    String speed,color;
    int r;
    boolean status;
    private String string;
    void get(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter fan speed here : ");
        speed = sc.nextLine();
        System.out.println("Enter radius here : ");
        r = sc.nextInt();
        System.out.println("Enter fan color : ");
        color = sc.next();
        System.out.println("Enter fan status : ");
        status = sc.nextBoolean();
    }
    void disp(){
        System.out.println("detail of FAN 1 ");
        System.out.println("Fan speed : " + speed);
        System.out.println("Fan color : " + color);
        System.out.println("Fan status : " + status);
        System.out.println("Fan radius : " + r);
    }
}
class fan2{
    String speed = "medium";
    int r = 6;
    String col = "Brown";
    boolean status = true;
    void disp(){
        System.out.println("Detail of FAN 2 ");
        // System.out.println("Fan speed : " + speed);
        // System.out.println("Fan color : " + col);
        // System.out.println("Fan status : " + status);
        // System.out.println("Fan radius : " + r);
    }
}
public class fann {
    public static void main(String[] args) {
        fan1 obj1 = new fan1();
        fan2 obj2 = new fan2();
        obj1.get();
        obj1.disp();
        obj2.disp();
    }
}