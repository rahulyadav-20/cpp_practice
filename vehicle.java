import java.util.logging.MemoryHandler;

public class vehicle {

    void sound(){
        System.out.println("Sound----");
    }
    void stop(){
        System.out.println("Stop------");
    }
    void steering(){
        System.out.println("Steering----");
    }

    public static void main(String[] args) {
    
        vehicle v=new vehicle();
        v.sound();
        My_vehicle v3=new My_vehicle();
        //v.pepe();

        //System.out.println(v.sound());
    }
    
}
