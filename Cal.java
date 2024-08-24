//Oerloading rules
// 1) method name should be same
// 2) no of params/order of  params/type of params should be diffrent
// 3) does not depand on return type
// 4) can be implement 


public class Cal {
    int add(int a, int b){
        return a+b;
    }    

    String add(String a, String b){
        return a+" "+b;
    }

    String add(int a, String b){
        return a+" "+b;
    }

    String add(String a, int b){
        return a+" "+b;
    }

    public static void main(String[] arg){
        Cal c1=new Cal();
        //
        System.out.println(c1.add(2,3));
        System.out.println(c1.add("rahul",100));
        System.out.println(c1.add(100,"rahul"));
        System.out.println(c1.add("Hello","World"));
    }
}
