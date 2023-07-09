import java.util.Scanner;
class Box {
    int l, b, h;
    void setData(int x, int y, int z) {
        l = x;
        b = y;
        h = z;
    }
    void display() {
        System.out.println("Length of box is:" + l);
        System.out.println("Width of box is:" + b);
        System.out.println("Height of box is:" + h);
    }
}

public class box_class {
    public static void main(String[] args) {
        int l, b, h;
       
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Length of box is:");
        l = sc.nextInt();
        System.out.println("Enter the Width of box is:");
        b = sc.nextInt();
        System.out.println("Enter the Height of box is:");
        h = sc.nextInt();
        Box b1 = new Box();
        b1.setData(l, b, h);
        b1.display();
    }
}
