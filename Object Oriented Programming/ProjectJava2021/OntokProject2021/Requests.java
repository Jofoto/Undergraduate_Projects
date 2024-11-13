import java.util.ArrayList;
import java.util.*;

public class Requests extends RequestDonationList{
   @Override 
   public void add(RequestDonation rd){
    try{  
    if (rdEntities.contains(rd)){
            if(rd.quantity>0){
                System.out.println("This entity already exists.");//h posotita tou entity uparxei ston organismo
            }
        } }catch(Exception e){
            System.out.println("Quantity doesn't exist");
        } 

         super.add(rd);      
    } 

    @Override
    public void modify(RequestDonation rd,double mod){
        try{  
            if (rdEntities.contains(rd)){
                    if(rd.quantity>0){
                        //h posotita tou entity uparxei ston organismo
                    }
                } }catch(Exception e){
                    System.out.println("Quantity doesn't exist");
                } 
        
                 super.modify(rd, mod);      
    }


    public void validRequestDonation(RequestDonation requestDonation){
        if(requestDonation.entity instanceof Material){    //elegxei ama to entity einai material
            /*if(Beneficiary.getNoPersons()==1 )
            System.out.println("Belongs to level1");
            
            else if (Beneficiary.getNoPersons()>=2 && Beneficiary.getNoPersons()<=4)
            System.out.println("Belongs to level2");
            
            else if (Beneficiary.getNoPersons()>=5)
             System.out.println("Belongs to level3");*/ 
             
             
        }else if(requestDonation.entity instanceof Service){  //elegxei ama to entity einai service
                System.out.println("No further checking needed.");
               
        }
        
    }

}
