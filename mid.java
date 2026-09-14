class my extends Thread{
    int a ,b;
    my(int a ,int b){
        this.a=a;
        this.b=b;
    }
    
    public void run(){
        for(int i =b;i<a;i++){
            System.out.println("sagar laude");
        }
    }
}
class mid{
    
    public static void main(String[] args) {
        try{
            int a=1;
            int b=0;
            int c=a/b;
        my t1 = new my(10, 5);
        t1.start();
        my t2 =new my(32,3);
        t2.start();
        }
        catch (ArithmeticException e){
            System.out.println(e);
        }
    }
}
