import java.util.Scanner;

public class bubble_sort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array");
        int n = sc.nextInt();
        int[] a;
        System.out.println("Enter array elements");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (n - i); j++) {
                if (a[j] > a[j + 1]) {
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
        System.out.println("Sorted array :  ");
        for (int i = 0; i < n; i++) {
            System.out.println(a[i]);
        }
    }

}
