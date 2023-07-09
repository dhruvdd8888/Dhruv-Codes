class thrad extends Thread{
    public void run()
    {
        for(int i=0;i=<5;i++)
        {
            System.out.println("executing"+i);
        try
        {
            Thread.sleep(1000);
        }
        catch(Exception e)
        {
            System.out.println(" ");
        }
        }
    }
    public static void main(String[] args) {
        thrad t1 = new thrad();
        thrad t2 = new thrad();
        t1.start();
        t2.start();
    }
}
