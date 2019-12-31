import java.util.*;
public class Myexception 
{
    public static void main(String args[])
    {
      try
      {
            Scanner sc = new Scanner(System.in);
          System.out.println(sc.nextInt()/ sc.nextInt());
      }
catch (Exception e){
    if(e.toString().length()>40)
  System.out.println("java.util.InputMismatchException");
  else
  System.out.println(e);
}
    
    }
}
