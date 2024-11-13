import java.util.*;

public class Donator extends User{
    private boolean isDonator;
    public  ArrayList<Offers> offersList = new ArrayList<Offers>();
    
    
    public void addOffers(Offers newOffer){
        offersList.add(newOffer);
        Material milk=new Material(1,34.4,45.5,60.0);
        milk.setEname("milk");
        RequestDonation off = new RequestDonation(milk,100.0);
        newOffer.add(off);

        offersList.add(newOffer);
        Service BabySitting=new Service(3);
        BabySitting.setEname("BabySitting");
        RequestDonation off1 = new RequestDonation(BabySitting,1);
        newOffer.add(off1);
    }

    public void removeOffers(Offers b){
        offersList.remove(b);
    }

    public void setDonator(boolean newDonator){this.isDonator = newDonator;}
  
   /* public void commitOffers(Offers c){
        offersList.commit(c); 
    }*/

    public Donator(String name, String phone){
        super(name,phone);
        
    }

    //getters
    public  ArrayList<Offers>getoffersList(){return offersList;}
    

    //setters
    public void setoffersList(ArrayList<Offers>offersList){
        this.offersList=offersList;
    }
   
    @Override
    public void printinfo(){
        super.printinfo();
        if (isDonator=true)
            System.out.println(" and is a Donator.");
    }
    
    @Override
    public String toString(){
        return String.format("User name: "+getName()+""+ "\n User phone: " +getPhone()+ " " );
   }

}
