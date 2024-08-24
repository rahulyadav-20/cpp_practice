import java.util.function.DoubleToIntFunction;

public class Bag {
    
    /*public void addBook(Book b){
        System.out.println("adding "+b.get_name()+ " to bag and cost "+ b.get_cost());
    }

    public void addPen(pen p){
        System.out.println("adding "+p.get_name()+" to bag and cost "+p.get_cost());
    }

    public void addWaterBotal(waterBotal w){
        System.out.println("adding "+w.get_name()+" to bag ans cost "+w.get_cost());
    }*/

    public void additem(item t1){
        System.out.println("adding "+ t1.get_name()+" to bag and cost: "+t1.get_cost());
    }

    public static void main(String[] args){
        Bag bag=new Bag();
       // bag.addBook(new Book());
       // bag.addPen(new pen());
       // bag.addWaterBotal(new waterBotal() );
        System.out.println("--------------------------------------------------------------");
        bag.additem(new Book()); 
        bag.additem(new pen());
        bag.additem(new waterBotal());
    }
}
