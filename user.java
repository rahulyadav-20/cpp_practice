public class user {
    //public String name;
    //public int age;

    private String name;
    private int age;

    void setName(String name){
        this.name=name;
    }

    void setAge(int age){
        if(age<20 || age>100){
            System.out.println("Invalid");
        }else{
            this.age=age;
        }
    }

    public String getName() {
        return this.name;
    }

    public int getAge(){
        return this.age;
    }
    
}
