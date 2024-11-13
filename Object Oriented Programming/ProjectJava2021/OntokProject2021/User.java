public abstract class  User{
    private String name;
    private String phone;

    public User(String name, String phone){
        this.name=name;
        this.phone=phone;
    }

    //getters
    public String getName(){return name;}
    public String getPhone(){return phone;}

    //setters
    public void setName(String newName){
        this.name=newName;
    }
    public void setPhone(String newPhone){
        this.phone=newPhone;
    }
   
    @Override
    public String toString(){
        return String.format("User name: "+getName()+""+ "\n User phone: " +getPhone()+ " " );
   }
    public void printinfo(){
        System.out.println("User name: "+getName()+""+ "\n User phone: " +getPhone()+ " " );
    }
}
