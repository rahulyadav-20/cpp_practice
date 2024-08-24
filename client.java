class client{
    public static void main(String[] args) {
        user u1=new user();
       /* u1.name="umesh";
        u1.age =1002;
        System.out.println("name: "+u1.name +", age: "+u1.age);*/
        System.out.println("-----------------------------------------------");
        
        u1.setName("Rahul");
        u1.setAge(50);
        System.out.println("name: "+u1.getName()+", Age: "+u1.getAge());
    }
}
