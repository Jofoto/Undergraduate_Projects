import java.util.Comparator;


public class RequestDonation implements Comparator<Entity> {
    Entity entity;
    double quantity;

    RequestDonation(Entity entity, double quantity){
        this.entity=entity;
        this.quantity=quantity;
    }

   //getters
    public Entity getEntity() {return entity;}
    public double getQuantity(){return quantity;}

    //setters
    public void setEntity(Entity newEntity){
        this.entity=newEntity;
    }
    public void setQuantity(double newQuantity){
        this.quantity=newQuantity;
    }
    @Override
    public int compare(Entity entity1, Entity entity2){
        return entity1.getID() - entity2.getID();
    }


}
