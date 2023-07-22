import java.util.Scanner;
public class Menu{
   
    public static int login(){
    int login_selection;
    Scanner input_login = new Scanner(System.in);
    
    Organization mOrg = new Organization();
    mOrg.setOName("Goods and Services");

    System.out.println("\nWelcome to our Organization: "+mOrg.getOName());
    System.out.println("-------------------------\n");
    System.out.println("1 - Register");
    System.out.println("2 - Login");
    System.out.println("3 - Quit");

    login_selection = input_login.nextInt();  
    return login_selection; 
    }
    
    public static int Donator(){
    int donator_selection;
    Scanner input_donator = new Scanner(System.in);
    
    System.out.println("1 -Add Offer");
    System.out.println("2 -Show Offers");
    System.out.println("3 - Commit");
    System.out.println("4 - Back");
    System.out.println("5 - Logout");
    System.out.println("6 - Exit");
    
    donator_selection = input_donator.nextInt();  
    return donator_selection; 
    }
    
    public static int Beneficiary(){
    int beneficiary_selection;
    Scanner input_beneficiary = new Scanner(System.in);

    System.out.println("1 -Add Request");
    System.out.println("2 -Show Request");
    System.out.println("3 - Commit");
    System.out.println("4 - Back");
    System.out.println("5 - Logout");
    System.out.println("6 - Exit");
    
    beneficiary_selection = input_beneficiary.nextInt();  
    return beneficiary_selection; 
    }
    
    public static int Admin(){
    int admin_selection;
    Scanner input_admin = new Scanner(System.in);
    
    System.out.println("1 - View");
    System.out.println("2 - Monitor Orginazation");
    System.out.println("3 - Back");
    System.out.println("4 - Logout");
    System.out.println("5 - Exit");
    
    admin_selection = input_admin.nextInt();
    return admin_selection;
    }
   
    public static int Category(){
    int category_selection;
    Scanner input_category = new Scanner(System.in);
    
    System.out.println("1.Material");
    System.out.println("2.Services");
    
    category_selection = input_category.nextInt();
    return category_selection;
    }
   
    public static int Lists(){
    int list_selection;
    Scanner input_list = new Scanner(System.in);
    
    System.out.println("1 - List Beneficiaries");
    System.out.println("2 - List Donators");
    System.out.println("3 - Reset Beneficiary List");
    
    list_selection = input_list.nextInt();
    return list_selection;
    }
        
}