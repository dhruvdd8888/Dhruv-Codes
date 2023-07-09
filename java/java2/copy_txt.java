import java.io.*;

public class copy_txt {
    public static void main(String[] args) {
        try {
            int c = 0;
            FileInputStream i = new FileInputStream("ip.txt");
            FileOutputStream o = new FileOutputStream("op.txt");
            while ((c = i.read()) != -1) {
                o.write(c);
            }
            System.out.println("Done");
        } 
        catch (Exception e){}
    }
}
