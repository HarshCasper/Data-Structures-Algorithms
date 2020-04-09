import java.util.Arrays;
public class Main{
  public static int findElement(int arr[],int num){
    Arrays.sort(arr);
    if(arr.length==0){
      return -1;
    }
    int start=0;
    int end=arr.length-1;
    while(start<=end){
      int mid=(start+end)/2;
      if((arr[mid]==num) && ((mid==end) || (arr[mid+1]>num))){
        return mid;
      }
      else if(num<arr[mid]){
        end=mid-1;
      }
      else{
        start=mid+1;
      }
    }
    return -1;
  }
  public static void main(String args[]){
    int arr[]={86,-16,77,65,45,77,28};
    int num=77;
    System.out.println("The Last Index of the element is "+findElement(arr,num));
  }
}
