import java.util.*; 
import java.io.*;

public class Organization {
    private String name;
    private Admin admin;
    public ArrayList<Entity> entityList = new ArrayList<Entity>();
    public ArrayList<Donator> donatorList= new ArrayList<Donator>();
    public ArrayList<Beneficiary> beneficiaryList = new ArrayList<Beneficiary>();
    public ArrayList<RequestDonationList> currentDonations = new ArrayList<RequestDonationList>();

   
    //getters
    public  String getOName() {return name;}
    public Admin getAdmin(){return admin;}
    public ArrayList<Entity> getentityList() {return entityList;}
    public ArrayList<Donator> getdonatorList(){return donatorList;}
    public ArrayList<Beneficiary> getbeneficiaryList(){return beneficiaryList;}
    public ArrayList<RequestDonationList> getcurrentDonations(){return currentDonations;}

    //setters
    public void setOName (String newOName){
        this.name = newOName;
    }
    public void setAdmin(Admin newAdmin){
        this.admin=newAdmin;
    }
    public void setentityList(ArrayList<Entity> newentityList){
        this.entityList=newentityList;
    }
    public void setdonatorList(ArrayList<Donator> newdonatorList)
    {
        this.donatorList=newdonatorList;
    }
   
    public void setcurrDonations(ArrayList<RequestDonationList> newcurrentDonations){
        this.currentDonations=newcurrentDonations;
    }
    
    //add,remove,insert etc.
    public void addEntity(Entity entity){
        entityList.add(entity);
    }
    public void removeEntity(Entity entity){
        entityList.remove(entity);
    }
    public void insertDonator(Donator donator){
        donatorList.add(donator); 
    }                               
    public void removeDonator(Donator donator){
        donatorList.remove(donator);
    }
    
    public void insertBeneficiary(Beneficiary beneficiary){
        beneficiaryList.add(beneficiary);
        beneficiary.printinfo();
    }
    public void removeBeneficiary(Beneficiary beneficiary){
        beneficiaryList.remove(beneficiary);
    }
    
    public void init(){String z1 = getDetails();}
    
    public String getDetails(){return this.getClass().getName();} //probably wrong
    
    //lists
    public String listEntities(){
        return ("Materials, Services: "+getDetails()+
        "\nEntities List: "+ getentityList());
    }
    public String listBeneficiaries(){
        return ("Beneficiaries: \n"+getbeneficiaryList());
    }
    public String listDonators(){
        return ("Donators: "+getdonatorList());
    }
   
    //wrappers for currDonations

    public void addcurrDonations(RequestDonationList curr){
           currentDonations.add(curr);
    }
    public void removecurrDonations(RequestDonationList curr){
        currentDonations.remove(curr);
    }
}
