import java.util.*;


public class RequestDonationList {
   
    protected ArrayList <RequestDonation> rdEntities = new ArrayList<RequestDonation>();
    
    Scanner idget = new Scanner(System.in);
    
    public RequestDonation get(ArrayList<RequestDonation> rdEntities, int idget){
        Iterator<RequestDonation> iterator = rdEntities.iterator();
        while (iterator.hasNext()) {
            RequestDonation requestDonation = iterator.next();
            if (requestDonation.getEntity().getID() == idget) {
                return requestDonation;
            }
        }
        return null;
    }
    
    Scanner qget = new Scanner(System.in);
    int q = qget.nextInt();    
   
    public void add(RequestDonation reqdon){
        if(rdEntities.contains(reqdon))
            reqdon.setQuantity(reqdon.getQuantity()+q); //gia na prosthetei thn uparxousa posotita me to donation
        else
           rdEntities.add(reqdon); //Exception if the entity does not exist in entityList?
    }
          
    public void remove(RequestDonation reqdon){rdEntities.remove(reqdon);}
    public void modify(RequestDonation reqdon, double mod){reqdon.setQuantity(mod);} // ftiaxneis ena double mod gia na tropopoihseis to quantity
    public void monitor(){System.out.println(Arrays.toString(rdEntities.toArray()));}
    public void reset(){rdEntities.clear();}       
     
    public ArrayList<RequestDonation> getReqDonList() {return rdEntities;}
}