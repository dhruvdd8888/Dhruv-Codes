import java.util.Scanner;

public class calender_day {

    static boolean isLeap(int y) {
        if (y % 100 == 0) {
            y /= 100;
        }
        if (y % 4 == 0) {
            return true;
        }
        return false;
    }

    static boolean isValid(int d, int m, int y, int day) {
        if (day > 0 && day < 8 && y >= 0) {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                if (d > 0 && d < 32) {
                    return true;
                }
            } else if (m == 4 || m == 6 || m == 9 || m == 11) {
                if (d > 0 && d < 31) {
                    return true;
                }
            } else if (m == 2) {
                if (isLeap(y)) {
                    if (d > 0 && d < 30) {
                        return true;
                    }
                } else {
                    if (d > 0 && d < 29) {
                        return true;
                    }
                }
            }
        }
        System.out.println("Invalid \nEnter Again");
        return false;
    }

    public static int dayGaper(int d,int m,int y,int day,int d2,int m2,int y2 )
    {
        int[] md ={31,28,31,30,31,30,31,31,30,31,30,31};
        int tc = 0;
        // for (int i = (m+1); i < m2; i++) {
        //     tc+= md[i];
        // }
        // if(m2>m)
        // {
        //     tc += md[m-1] - d;
        //     tc += d2;
        // }

        int dp1=0,dp2=0;
        for(int i=0;i<(m-1);i++)
        {
            dp1+= md[i];
        }
        dp1+= d;
        
        for(int i=0;i<(m2-1);i++)
        {
            dp2+= md[i];
        }
        dp2+= d2;

        if((m>2)  && (isLeap(y)))
        {
            dp1++;
        }
        if((m2>2)&& (isLeap(y2)))
        {
            dp2++;
        }
        if(dp2<dp1)
        {
            tc = 365-dp1+dp2;
        }
        else
        {
            tc= dp2-dp1;
        }
        for (int i = (y); i < y2; i++) 
        {
            if(isLeap(i))
            {
                tc+= 366;
            }
            else    
            {
                tc+= 365;
            }
        }
        return tc;
    }
    public static void dc(int d,int g)
    {
        d+=g;
        d%=7;
        if(d==0)
        {
            System.out.println("7");
            return;
        }
        System.out.println(d);  
    }

    public static void main(String[] args) {
        int d=0, m=0, y=0, day=0;
        Scanner sc = new Scanner(System.in);
        boolean v = false;
        while (!v) {
            System.out.println("----------------------------------------------------------------");
            System.out.println("Enter date");
            d = sc.nextInt();
            System.out.println("Enter month");
            m = sc.nextInt();
            System.out.println("Enter year");
            y = sc.nextInt();
            // System.out.println("-------------------------------------------------------------");
            // System.out.println("1 for Monday");
            // System.out.println("2 for Tuesday");
            // System.out.println("3 for Wednesday");
            // System.out.println("4 for Thursday");
            // System.out.println("5 for Friday");
            // System.out.println("6 for Saturday");
            // System.out.println("7 for Sunday");
            System.out.println("Enter day");
            day = sc.nextInt();

            v = isValid(d, m, y, day);
        }
        System.out.println("First date entry successfull");

        int d2=0, m2=0, y2=0;
        boolean v2 = false;
        while (!v2) {
            System.out.println("----------------------------------------------------------------");
            System.out.println("Enter date to check");
            System.out.println("Enter date");
            d2 = sc.nextInt();
            System.out.println("Enter month");
            m2 = sc.nextInt();
            System.out.println("Enter year");
            y2 = sc.nextInt();

            v2 = isValid(d2, m2, y2, 3);
        }
        System.out.println("Second date entry successfull");

        int dg = dayGaper(d,m,y,day,d2,m2,y2);
        dc(day,dg);
    }
}
