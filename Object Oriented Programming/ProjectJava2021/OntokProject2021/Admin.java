public class Admin extends User {
    protected boolean isAdmin = true;
    
    public Admin(String name, String phone, boolean isAdmin){
        super(name,phone);
        this.isAdmin = isAdmin;
    }

   /* //getter
    public boolean getAdmin(){return isAdmin;}
    //setter
    public void setAdmin(boolean newAdmin){
        this.isAdmin=newAdmin;
    }*/

    public void printinfo(){
        super.printinfo();
        
            System.out.println(" and is the Admin.");
    }

    @Override
    public String toString(){
        return String.format("User name: "+getName()+""+ "\n User phone: " +getPhone()+ " " );
   }
}
