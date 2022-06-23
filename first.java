import java.util.Scanner;
class tuna{
  private String pet;
  public tuna(String name)
  {
    pet=name;
  }
  public void simplemethod(){
    System.out.println("this is another class" +getname());
  }
  public String getname(){
    return pet;
  }
  public void saying(String name){
   pet=name;
  }
}
public class first{

   public static void main (String args[])
   {

     Scanner val = new Scanner(System.in);
     String nmane = val.nextLine();
     //int d ;
     //d=c+b;
     //System.out.println(d);
       tuna Dog =new tuna("tuffy");
       //Dog.saying(nmane);
       Dog.simplemethod();

   }

}
