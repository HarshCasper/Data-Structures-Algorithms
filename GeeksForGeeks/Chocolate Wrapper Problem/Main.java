import java.util.*;
public class Main{
  static int solution(int chocolate,int cost,int wrapper){
    int wrap=0;
    wrap=(int)chocolate/cost;
    int chocolate_total=wrap;
    while(wrap>=wrapper){
      wrap-=wrapper;
      wrap++;
      chocolate_total++;
    }
    return chocolate_total;
  }
  public static void main(String[] args){
    int chocolate=15;
    int cost=1;
    int wrapper=3;
    System.out.println("The Total Number of Chocolates are: "+solution(chocolate,cost,wrapper));
  }
}
