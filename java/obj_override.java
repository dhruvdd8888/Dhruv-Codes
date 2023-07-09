import java.util.Scanner;

class squre {
    int l;
    void ip() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length : ");
        l = sc.nextInt();
    }

    void op(){
        int a = l*l;
        System.out.println("Area  of square : "+a);
    }
}

public class obj_override {
    public static void main(String[] args) {
        squre sq1= new squre();
        squre sq2 = sq1;
        sq1.ip();
        sq2.op();
    }
}
