import java.util.*;
class a {
    int sd, fg;
    a(int a, int b) {
        sd = a;
        fg = b;
    }
}

class b extends a implements c {
    Scanner sc= new Scanner(System.in);
    String name=sc.nextLine();

    private static final String Sys = null;
    b(int hj, int kl) {
         
     super(hj,kl);
    }
    @Override
    public void display(){
        System.out.println("lkhfsa");
    }
    static void meow(){
        System.out.print("hgfsdaa");
    }
}
interface c{
     void display();

}
class classkol {
    public static void main(String[] args) {
        b om = new b(12, 34);
        om.display();
        System.out.println(om.sd + " " + om.fg);
        b.meow();
    }
}