import java.util.*;
public class Main {
    public static void main(String[] args){
        
        Organization mOrg = new Organization();
        /*--------------Materials--------------------------*/
        
        ArrayList <Material> Materials = new ArrayList<>();
        Material milk = new Material(1, 30.5, 40.6, 80.4);
        Material sugar = new Material(2, 31.5, 41.6, 81.4);
        Material rice = new Material(3, 32.5, 42.6, 82.4);

        Materials.add(milk);
        Materials.add(sugar);
        Materials.add(rice);
        
        milk.setEname("Milk");
        sugar.setEname("Sugar");
        rice.setEname("Rice");
        
        milk.setDescription("0 in fat");
        sugar.setDescription("Low in calories");
        rice.setDescription("Basmati");
        
        
        
        /*---------------Services------------------------*/
        ArrayList <Service> Services = new ArrayList<>();
        Service MedicalSupport = new Service(1);
        Service NurcerySupport = new Service(2);
        Service BabySitting = new Service(3);
         
        Services.add(MedicalSupport);
        Services.add(NurcerySupport);
        Services.add(BabySitting);
        
        MedicalSupport.setEname("MedicalSupport");
        NurcerySupport.setEname("NurcerySupport");
        BabySitting.setEname("BabySitting");
        
        MedicalSupport.setDescription("For injuries");
        NurcerySupport.setDescription("For newborns");
        BabySitting.setDescription("Unattended Care");

        RequestDonation off = new RequestDonation(milk,100.0);
        
        
        /*---------------Set Users-------------------------*/
        Donator dono = new Donator("Sotiris Papageorgiou","6985632478");
        Donator dono1 = new Donator("Maria Stamou","6989774488");
        Donator dono2 = new Donator("Christos Alexiou","6955997785");

        Beneficiary bene = new Beneficiary("Eleni Aratou","6978452566", 3);
        Beneficiary bene1 = new Beneficiary("Sofia Stamatopoulou","2610997485", 5);
        Beneficiary bene2 = new Beneficiary("George Petrou","699463756", 3);

        Admin admin = new Admin("Efraim Georgia", "2104867334", true);

        mOrg.insertDonator(dono);
        mOrg.insertDonator(dono1);
        mOrg.insertDonator(dono2);

        mOrg.insertBeneficiary(bene);
        mOrg.insertBeneficiary(bene1);
        mOrg.insertBeneficiary(bene2);
        mOrg.setAdmin(admin);

        
        
        int loginChoice;
        loginChoice = Menu.login();
       
        while (loginChoice < 1 || loginChoice > 3) {
            System.out.print("\n----Error! Incorrect choice.----\n");
            loginChoice = Menu.login();
        }
        
        switch(loginChoice){
            case 1:      //case 1: register
                Scanner register = new Scanner(System.in);
                System.out.println("Give phone number:");
                String phone = register.nextLine();
                System.out.println("Give Name:");
                String name = register.nextLine();
                System.out.println("Do you wanna be a Beneficiary or Donator?\n (Press B for Beneficiary or D for Donator)\n");
                String role;
                do{
                    role = register.nextLine();
                }while(!role.matches("[BbDd]"));
                
                if(role.matches("[Bb]")){
                    System.out.println("How many people are in your family(including you)?");
                    String persons = register.nextLine();
                    int noP = Integer.parseInt(persons);
                    Beneficiary newBeneficiary = new Beneficiary(phone, name, noP);
                    mOrg.insertBeneficiary(newBeneficiary);
                    System.out.println("You have been set as a Beneficiary");
                    System.exit(0);
                    
                }else{
                    Donator newDonator = new Donator(phone, name);
                    mOrg.insertDonator(newDonator);
                    System.out.println("You have been set as a Donator");
                    System.exit(0);
                }
                
             break;
        
            case 2: //case 2: login
                Scanner login = new Scanner(System.in);
                System.out.println("Give phone number:");
                phone = login.nextLine();
                
                do{
                for(Donator donator: mOrg.donatorList){
                    if(phone.equals(donator.getPhone()) && donator instanceof Donator ){
                        int donatorChoice;
                        System.out.println("-----Welcome "+donator.getName()+"------\n");
                        System.out.println("-----User Info----- \n");
                        donator.printinfo();
                        donatorChoice = Menu.Donator();
                        
                        while (donatorChoice < 1 || donatorChoice > 6) {
                            System.out.print("\n----Error! Incorrect choice.----\n");
                            donatorChoice = Menu.Donator();
                        }
                        switch(donatorChoice){
                        
                        case 1:
                            
                            int categoryChoice;
                            categoryChoice = Menu.Category();
                            
                            while (categoryChoice < 1 || categoryChoice > 2) {
                                System.out.print("\n----Error! Incorrect choice.----\n");
                                categoryChoice = Menu.Category();
                            }
                            switch(categoryChoice){
                            
                                case 1:
                                
                                System.out.println("------All the existing products------\n\n");
                                    for(Material material: Materials){
                                        System.out.println(material.getDetails());
                                        System.out.println(material.toString());
                                    }
                                    System.out.println("Do you want to donate? Y/N");      
                                    Scanner material_donate = new Scanner(System.in);
                                    String Md = material_donate.nextLine();
                                    
                                    if(Md.matches("[Yy]")){
                                        donator.printinfo();
                                        System.out.println("Amount of quantity you want to donate:");
                                        Md = material_donate.nextLine();
                                        System.out.println("Amount donated:" + Md);
                                       
                                        donatorChoice = Menu.Donator();
                                    } else if(Md.matches("[Nn]")){
                                        System.out.println("Goodbye");
                                         System.exit(0);
                                    }
                                    
                                    break;
                                    
                                case 2:
                                System.out.println("------All the existing products------\n\n");
                                    for(Service service: Services){
                                        System.out.println(service.getDetails());
                                        System.out.println(service.toString());
                                    }
                                    System.out.println("Do you want to donate? Y/N");
                                    Scanner service_hours = new Scanner(System.in);
                                    String Sh = service_hours.nextLine();
                                    
                                    if(Sh.matches("[Yy]")){
                                        System.out.println("How many service hours?");
                                        Sh  = service_hours.nextLine();
                                        System.out.println("Hours commited:" + Sh);
                                        loginChoice = Menu.Donator();
                                    }else if(Sh.matches("[Nn]")){
                                        System.out.println("Goodbye");
                                         System.exit(0);
                                    }
                                break;
                            }
                            
                            
                        break;
                        case 2: 
                        System.out.println("\n\n------All the existing offers on materials------\n");
                                    for(Material material: Materials){
                                        System.out.println(material.getDetails());
                                        System.out.println(material.toString());
                                    }
                                    System.out.println("\n\n------All the existing offers on services------\n");
                                    for(Service service: Services){
                                        System.out.println(service.getDetails());
                                        System.out.println(service.toString());
                                    }
                                    System.exit(0);
                                    /*System.out.println("IF YOU WANT TO GO BACK, PRESS 4");      
                                    Scanner go_back = new Scanner(System.in);
                                    int back = go_back.nextInt();

                                    while(back !=4){
                                        System.out.println("Incorrect, Try Again.");
                                         break;}    
                                        
                                    if(back == 4){
                                       
                                        loginChoice = Menu.Donator();
                                    }*/

                                    


                               /*for(Offers list: donator.offersList){
                                   
                               if(list.rdEntities.isEmpty()){
                                   System.out.println("You have no pending Offers");
                               }else{
                                   for(int i=0; i < list.rdEntities.size(); i++){
                                        System.out.println( list.rdEntities.get(i) );
                                    }
                               }
                            }*/
                               
                            break;
                        case 3:
                            break;
                        case 4:
                             loginChoice = Menu.login();
                            break;
                        case 5: 
                             loginChoice = Menu.login();     //logout-back to login/register
                            break;
                        case 6:
                            System.out.println("Exiting");
                            System.exit(0);
                          break;
                        } 
                    }
                }
                
                for(Beneficiary beneficiary: mOrg.beneficiaryList){
                    if(phone.equals(beneficiary.getPhone()) && beneficiary instanceof Beneficiary){
                        int beneficiaryChoice;
                        System.out.println("-----Welcome "+beneficiary.getName()+"------\n");
                        System.out.println("-----User Info----- \n");
                        beneficiary.printinfo();
                        beneficiaryChoice = Menu.Beneficiary();
                        while (beneficiaryChoice < 1 || beneficiaryChoice > 6) {
                            System.out.print("\n----Error! Incorrect choice.----\n");
                            beneficiaryChoice = Menu.Beneficiary();
                        }
                        switch(beneficiaryChoice){
                            
                            case 1:
                            int categoryChoice;
                            categoryChoice = Menu.Category();
                            switch(categoryChoice){
                                
                                case 1:
                                    beneficiary.printinfo();
                                    System.out.println("------All the existing products------\n\n");
                                    for(Material material: Materials){
                                       
                                        System.out.println(material.getDetails());
                                        System.out.println(material.toString());
                                    }
                                    System.out.println("Do you want to add a request? Y/N");      
                                    Scanner material_donate = new Scanner(System.in);
                                    String Md = material_donate.nextLine();
                                    
                                    if(Md.matches("[Yy]")){
                                        beneficiary.printinfo();
                                        System.out.println("Amount of quantity you want to request:");
                                        Md = material_donate.nextLine();
                                        //donator.addOffers();
                                        System.out.println("Amount requested:" + Md);}
                                        else if(Md.matches("[Nn]")){
                                            System.out.println("Goodbye");
                                             System.exit(0);
                                        }
                                     
                                    
                                    break;
                                    
                                case 2:
                                    
                                    for(Service service: Services){
                                        System.out.println(service.getDetails());
                                        System.out.println(service.toString());
                                    }
                                    System.out.println("Do you want to request something? Y/N");
                                    Scanner service_hours = new Scanner(System.in);
                                    String Sh = service_hours.nextLine();
                                    
                                    if(Sh.matches("[Yy]")){
                                        System.out.println("How many service hours do you want?");
                                        Sh  = service_hours.nextLine();
                                        System.out.println("Hours requested:" + Sh);
                                    }else if(Sh.matches("[Nn]")){
                                        System.out.println("Goodbye");
                                         System.exit(0);
                                    }
                                    break;
                            }
                            case 2:
                            System.out.println("\n\n------All the existing requests on materials------\n");
                            for(Material material: Materials){
                                System.out.println(material.getDetails());
                                System.out.println(material.toString());
                            }
                            System.out.println("\n\n------All the existing requests on services------\n");
                            for(Service service: Services){
                                System.out.println(service.getDetails());
                                System.out.println(service.toString());
                            }
                            
                          /*  System.out.println("IF YOU WANT TO GO BACK, PRESS 4");      
                            Scanner go_back = new Scanner(System.in);
                            int back = go_back.nextInt();

                            while(back !=4){
                                System.out.println("Incorrect, Try Again.");
                                 break;}    
                                
                            if(back == 4){
                               
                                loginChoice = Menu.Beneficiary();
                            }*/
                                break;
                            case 3:
                                break;
                            case 4:
                                 loginChoice = Menu.login();
                                break;
                            case 5:
                                loginChoice = Menu.login();
                                break;
                            case 6:
                                System.out.println("Exiting");
                                System.exit(0);
                                break;
                            
                        }
                    }
                } 
                
               do{
                
                    if(phone.equals(admin.getPhone()) && admin instanceof Admin){
                        int adminChoice;
                        System.out.println("-----Welcome "+admin.getName()+"------\n");
                        System.out.println("-----Admin Info----- \n");
                        admin.printinfo();
                        adminChoice = Menu.Admin();
                        while (adminChoice < 1 || adminChoice > 5) {
                            System.out.print("\n----Error! Incorrect choice.----\n");
                        }
                        admin.printinfo();
                        switch(adminChoice){

                            case 1:
                                int categoryChoice;
                                categoryChoice = Menu.Category();
                                switch(categoryChoice){
                                    
                                    case 1:
                                   
                                        for(Material material: Materials){
                                       
                                            System.out.println(material.getDetails());
                                            System.out.println(material.toString());
                                        }
                                        break;
                                    
                                    case 2:
                                        
                                        for(Service service: Services){
                                            System.out.println(service.getDetails());
                                            System.out.println(service.toString());
                                        }
                                        
                                    break;
                                }
                            break;
                            
                            case 2:
                                int listChoice;
                                listChoice = Menu.Lists();
                                switch(listChoice){
                                
                                    case 1:
                                    
                                    System.out.println(mOrg.listBeneficiaries()); 
                                        
                                    for(Beneficiary blist: mOrg.beneficiaryList){
                                            for(int i=0; i<blist.receivedList.size(); i++){
                                                System.out.println(blist.receivedList.get(i));
                                            }
                                        }
                                        
                                        
                                        /*for(RequestDonationList blists: mOrg.currentDonations ){
                                            if(blists.rdEntities.isEmpty()){
                                                System.out.println("You have no pending Offers");
                                            }else{
                                                for(int i=0; i<blists.rdEntities.size(); i++){
                                                    System.out.println( blists.rdEntities.get(i) );
                                                }
                                            }
                                            
                                        }*/
                                        break;
                                    
                                    case 2:
                                    
                                    System.out.println(mOrg.listDonators());
                                    
                                        for(Donator dlist: mOrg.donatorList){
                                            for(int i=0; i<dlist.offersList.size(); i++){
                                                System.out.println(dlist.offersList.get(i));
                                            }
                                        }
                                        break;
                                        
                                    case 3:
                                        
                                        break;
                                }
                            break;

                            case 3:
                            loginChoice = Menu.login();
                                break;
                            case 4:
                            loginChoice = Menu.login();
                                break;
                            case 5:
                                System.out.println("Exiting");
                                System.exit(0);
                                break;
                        }
                    }
               
                }while(loginChoice !=5); }while(loginChoice !=6);
            break;
            
               
            case 3:
              System.out.println("Exiting");
              System.exit(0);
              break;
        }
    }
}
        //comparator check
        /*  //arraylist for entity
        ArrayList <Entity> Entities = new ArrayList<Entity>();
        Entity obj1 = new Entity("Rizi", "Polu", 23);
        Entity obj2 = new Entity("Rizi", "Polu", 24);
        Entity obj3 = new Entity("Rizi", "Polu", 25);
        Entities.add(obj1);
        Entities.add(obj2);
        Entities.add(obj3);
        Iterator<Entity> custIterator = Entities.iterator();
        System.out.println("Before Sorting:\n");
        while (custIterator.hasNext()) {
            System.out.println(custIterator.next());
        }
  
        // sorting using Collections.sort(al, comparator);
        Collections.sort(Entities, new RequestDonation());
        System.out.println("\nSort ID: \n");
        for(Entity id: Entities){
            System.out.println(id.getEntityInfo());
        }*/ 