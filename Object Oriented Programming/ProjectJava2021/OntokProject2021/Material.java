public class Material extends Entity{
    double level1, level2, level3;

    public Material(int id, double level1, double level2, double level3){
        super(id);
        this.level1 = level1;
        this.level2 = level2;
        this.level3 = level3; 
         
    }

    //getters
    public double getLvl1(){return level1;}
    public double getLvl2(){return level2;}
    public double getLvl3(){return level3;}
    
    //setters
    public void setLvl1(double newLvl1){
        this.level1=newLvl1;
    }
    public void setLvl2(double newLvl2){
        this.level2=newLvl2;
    }
    public void setLvl3(double newLvl3){
        this.level3=newLvl3;
    }
    
    

    public void init(){String x1 = getDetails();}
    public String getDetails(){
        return this.getClass().getName() + "\n" + " 1 person  gets quantity Level1: " +this.level1 + 
        "\n 2-4 people get quantity Level 2: " + this.level2 + "\n 5 or more people get quantity Level 3: " + this.level3;
        
        
    }
    @Override
    public String toString(){
        return String.format("-------Entity Info------- "+ getEntityInfo()+ "\n --------Details---------- \n"+ getDetails()+"\n");
    }
}

