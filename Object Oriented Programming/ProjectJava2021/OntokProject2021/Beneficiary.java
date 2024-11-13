import java.util.*;


public class Beneficiary extends User {
    static int noPersons = 1;
    private boolean isBeneficiary;
   
    
    public ArrayList<RequestDonationList> receivedList = new ArrayList<RequestDonationList>();
    public ArrayList<Requests> requestsList = new ArrayList<Requests>();

    
    public void addRequestDonationList(RequestDonationList a){
        receivedList.add(a);
    }
    public void removeRequestDonationList(RequestDonationList b){
        receivedList.remove(b);
    }

    public void setBeneficiary(boolean newBeneficiary){this.isBeneficiary = newBeneficiary;}


    
    public void addRequests(Requests a){
        requestsList.add(a);
        Material milk=new Material(1,34.4,45.5,60.0);
        milk.setEname("milk");
        RequestDonation red = new RequestDonation(milk,100.0);
        a.add(red);

        receivedList.add(a);
        Service BabySitting=new Service(3);
        BabySitting.setEname("BabySitting");
        RequestDonation red1 = new RequestDonation(BabySitting,1);
        a.add(red1);
    } //etsi sundeoume ton beneficiary me ta upoloipa
    
    public void removeRequests(Requests b){
        requestsList.remove(b);
    }

  /*  public void commitRequests(Requests c){
        requestsList.commit(c);
    }*/
    
    public Beneficiary(String name, String phone, int noPersons){
        super(name,phone);
        this.noPersons=noPersons;
    }

    //getters
    public ArrayList<RequestDonationList>getreceivedList(){return receivedList;}
    public ArrayList<Requests> getrequestsList(){return requestsList;}
    public static int getNoPersons(){return noPersons;}

    //setters
    public void setreceivedList(ArrayList<RequestDonationList>receivedList){
        this.receivedList=receivedList;
    }
    public void setrequestsList(ArrayList<Requests>requestsList){
        this.requestsList=requestsList;
    }
    public void setNoPersons(int newNoPersons){
        this.noPersons=newNoPersons;
    }

    @Override
    public void printinfo(){
        super.printinfo();
        if (isBeneficiary=true)
            System.out.println(" and is a Beneficiary.");
    }

    @Override
    public String toString(){
        return String.format("User name: "+getName()+""+ "\n User phone: " +getPhone()+ " " );
   }

}
