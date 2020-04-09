public class BRUTE_FORCE{
  public static int findSingle(int a[]){
    
    for(int i=0;i<a.length;i++){
      int k=a[i];
      int flag=0;
      for(int j=0;j<a.length;j++){
        if(k==a[j]){
          flag++;
        }
      }
      if(flag==1){
        return k;
      }
    }
    return -1;
  }
  public static void main(String args[]){
    int a[]={1,1,2,2,2,3,3,4};
    System.out.println("The Element which appears only once is: "+findSingle(a));
  }
}
