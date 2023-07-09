class thrad extends Thread {
    public void run(){
        try
        {
            // for(int i=0;i<5;i++)
            // {
                System.out.println("executing "+1);
                Thread.sleep(50);
            // }
        }
        catch(Exception e)
        {
            System.out.println(" ");
        }
    }

    public static void main(String[] args) {
        thrad t1 = new thrad();
        thrad t2 = new thrad();
        t1.run();
        t2.run();
    }
}
