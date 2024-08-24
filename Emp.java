public class Emp {
    //instance variable
    int id;
    String name;
    double salary;
    //static variable
    static int count=0;
    public static void main(String[] args) {
        Emp e1=new Emp();
        e1.id=1;
        e1.name="rahul";
        e1.salary=300000;
        System.out.println("--------------------------------------------------");
        System.out.println(e1.id);
        System.out.println(e1.name);
        System.out.println(e1.salary);
        Emp e2=new Emp();
        e2.id=2;
        e2.name="Pankaj";
        e2.salary=450000;
        System.out.println("----------------------------------------------------");
        System.out.println(e2.id);
        System.out.println(e2.name);
        System.out.println(e2.salary);
        System.out.println("----------------------------------------------------");
        Emp e3=e2;
        System.out.println(e3.id);
        System.out.println(e3.name);
        System.out.println(e3.salary);
        count++;
        e2.count=98;
        System.out.println(count);
    }
    
}
