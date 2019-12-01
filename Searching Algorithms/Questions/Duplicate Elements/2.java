import java.util.Scanner;
import java.util.Arrays; 
public class duplicate{
    public static void main(String[] args){
    int n,i,j,flag=0;
    Scanner s=new Scanner(System.in);
    System.out.println("Enter the number of elements that you are going to enter into the array:");
    n=s.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter the elements into the array:");
    for(i=0;i<n;i++){
        arr[i]=s.nextInt();
    }
    Arrays.sort(arr);
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            System.out.println("Duplicate in the Array is "+arr[i]);
            flag=1;
            break;
        }
    }
    if(flag==0){
        System.out.println("No Duplicates in the Array");
    }
}
}
    
        
