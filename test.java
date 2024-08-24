import java.nio.file.ProviderMismatchException;

public class test {
    int i= f();
    int f(){
        i=10;
        System.out.println("f() method i= "+i);
        return i;
    }
    test(){
        System.out.println("i value befor= "+i);
        i=20;
        System.out.println("i method after="+i);
    }
    public static void main(String[] args) {
        test t1=new test();
        System.out.println(t1.i);
    }
}
