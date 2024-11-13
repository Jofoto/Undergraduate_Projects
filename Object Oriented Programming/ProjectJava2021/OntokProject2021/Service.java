public class Service extends Entity{
    
    
    public Service(int id){
        super(id);
    }
    
    public void init(){String y1 = getDetails();}
    public String getDetails(){return this.getClass().getName();}
    
    @Override
    public String toString(){ return String.format("-------Entity Info------- "+ getEntityInfo()+ "\n --------Details---------- \n"+ getDetails()+"\n");}
}
