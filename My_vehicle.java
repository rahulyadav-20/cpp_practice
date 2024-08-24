public class My_vehicle extends vehicle{
    //vehicle v=new vehicle();
    void pepe(){
        System.out.println("pipe------");
    }
    public static void main(String[] args) {
        vehicle v1=new vehicle();
        My_vehicle v4= new My_vehicle();
        v4.sound();

        v1.sound();
    }    
}
