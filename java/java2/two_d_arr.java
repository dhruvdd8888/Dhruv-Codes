public class two_d_arr {
    public static void main(String[] args) {
        int[][] x = new int[2][3];
        x[1][0] = 34;
        System.out.println(x[1][0]);

        // or

        int[][] y = { { 53, 66 }, { 66, 44, 3 } };
        System.out.println(y[0][0]);
        System.out.println(y[0][1]);
        System.out.println(y[1][2]);
    }

}
