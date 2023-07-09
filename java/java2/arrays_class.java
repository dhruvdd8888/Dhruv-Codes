import java.util.Arrays;

public class arrays_class {
    public static void main(String[] args) {
        int[] roll = new int[5];
        roll[0] = 3;
        roll[1] = 33;
        roll[2] = 24;
        roll[3] = 5;
        roll[4] = 2;
        Arrays.sort(roll);
        System.out.println(roll[0]);
    }
}
