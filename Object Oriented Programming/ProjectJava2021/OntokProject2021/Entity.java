public abstract class Entity { //einai abstract gia na mporoume na xrhs methodo pou tha dexete antikeimena upoklasewn tis
     private String ename;
     private String description;
     private  int id ;


     public Entity(int id){
      
          this.id=id;
     }
     //getters
     public String getEname(){return ename;}
     public String getDescription(){return description;}
     public int getID(){return id;}
     
     //setters
     public void setEname(String newEname){
          this.ename=newEname;
     }
     public void setDescription(String newDescription){
          this.description=newDescription;
     }
     public void setID(int newID){
          this.id=newID;
     }

     public  String getEntityInfo(){
          return("\nEntity name: "+this.ename+"\nEntity Description: "+this.description+"\nEntity ID: "+this.id);
     }

     public abstract String getDetails(); /*h methodos einai abstract gt den theloume na 
     orisoume kati sto swma ths sthn class entity enw thn xreiazomaste gia na 
     orisoume ta details se alles subclasses opou tha thn uperkalipsoume */
     public abstract void init(); //initializa tin getDetails

     @Override
     public String toString(){
          
          return String.format("-------Entity Info------- "+ getEntityInfo()+ "\n --------Details---------- \n"+ getDetails()+"\n");
     }






}
