class thrad_not_ext implements Runnable {
    public void run() {
        try {
            for (int i = 0; i <= 5; i++) {
                System.out.println("executing " + i);
                Thread.sleep(500);
            }
        } catch (Exception e) {
            System.out.println(" ");
        }
    }

    
    public static void main(String[] args) {
        thrad_not_ext t11 = new thrad_not_ext();
        thrad_not_ext t12 = new thrad_not_ext();

        Thread t1 = new Thread(t11);
        Thread t2 = new Thread(t12);
        t1.start();
        t2.start();
    }
}
