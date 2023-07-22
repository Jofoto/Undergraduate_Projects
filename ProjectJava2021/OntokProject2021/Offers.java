import java.util.*;
public class Offers extends RequestDonationList{
    
    @Override 
    public void add(RequestDonation off){
     try{  
     if (rdEntities.contains(off)){
             if(off.quantity>0){
                System.out.println("This entity already exists."); //h posotita tou entity uparxei ston organismo
             }
         } }catch(Exception e){
             System.out.println("Quantity doesn't exist");
         } 
 
          super.add(off);      
     } 

     @Override
    public void modify(RequestDonation off,double mod){
        try{  
            if (rdEntities.contains(off)){
                    if(off.quantity>0){
                        //h posotita tou entity uparxei ston organismo
                    }
                } }catch(Exception e){
                    System.out.println("Quantity doesn't exist");
                } 
        
                 super.modify(off, mod);      
    }

   /* public void commit(Offers off){
        
        if(RequestDonation.contains(off))
            off.setcurrDonations(off.getcurrentDonations()+off); //gia na prosthetei thn uparxousa posotita me to donation
        else
            currentDonations.addcurrDonations(off); 
}*/
}