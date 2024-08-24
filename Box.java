public class Box {
    int h,l,w;

    int get_Box(){
        System.out.println("h= "+h+" l = "+l+" w= "+w);
        return h*l*w;
    }
    //default constractor
    Box(){
        h=1;
        l=2;
        w=3;
    }
    // Parametersize Constractor
    Box(int h1,int l1,int w1){
        h=h1;
        l=l1;
        w=w1;
    }

    //copy Contractor
    Box(Box b){
        h=b.h;
        l=b.l;
        w=b.w;
    }
    public static void main(String [] arg){
        Box b1= new Box();
        System.out.println("---------------------------------");
        System.out.println("Area Of Box: "+b1.get_Box());
        System.out.println("---------------------------------");
        Box b2= new Box(5,2,5);
        System.out.println("Area of Box: "+b2.get_Box());
        System.out.println("----------------------------------");
        Box b3=new Box(b2);
        System.out.println("Area of Box: "+b3.get_Box());
        System.out.println("------------------------------------");

    }
    
}
