// Approach using XOR Operator

public class XOR_Process{
  public static int findSingle(int a[]){
    int length=a.length;
    if(length==0){
      return -1;
    }
    int xor=a[0];
    for(int i=1;i<length;i++){
      xor=xor^a[i];
    }
    return xor;
  }
  public static void main(String args[]){
    int a[]={1,1,2,3,3};
    System.out.println("The Element which appears only once is: "+findSingle(a));
  }
}
