import java.util.Scanner;

public class pass_check_n_except {

    public static void passcheck(String p) {
        boolean d = false, lc = false, uc = false, ss = false;
        
        for (int i = 0; i < p.length(); i++) {
            if (Character.isDigit(p.charAt(i))) {
                d = true;
            } else if (Character.isLetter(p.charAt(i))) {
                if (Character.isUpperCase(p.charAt(i))) {
                    uc = true;
                } else if (Character.isLowerCase(p.charAt(i))) {
                    lc = true;
                }
            } else {
                ss = true;
            }
        }
        try{
            if (ss && lc && uc && d && (p.length() < 10) && (p.length() > 5)) {
                System.out.println(p);
            }
            else {
                throw new Exception("Invalid format");
            }
        }
        catch(Exception e)
        {
            System.out.println("Not allowed");
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        String p;
        Scanner sc = new Scanner(System.in);
        p = sc.next();
        passcheck(p);
    }
}
