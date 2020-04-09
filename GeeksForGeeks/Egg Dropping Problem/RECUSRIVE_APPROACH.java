import java.util.*;
public class Main{
  public static int EggDrop(int n,int k){
    if(k==1 || k==0){
      return k;
    }
    if(n==1){
      return k;
    }
    int min=Integer.MAX_VALUE;
    int i,drop;
    for(i=1;i<=k;i++){
      drop=Math.max(EggDrop(n-1,i-1),EggDrop(n,k-i));
      if(drop<min){
        min=drop;
      }

    }
    return min+1;

  }
  public static void main(String[] args){
    int n=2;
    int k=10;
    System.out.println("The Minimum Number of Floors needed to solve the Egg Drop Problem in Worst Case is: "+EggDrop(n,k));
  }
}
