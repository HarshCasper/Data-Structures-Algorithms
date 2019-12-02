// Given in an array, every element occurs twice except for one element. Find that single element.
import java.util.Scanner;
public class single_element{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n,i;
        System.out.println("Enter the number of elements in the array:");
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int missingNum=0;
        for(i=0;i<n;i++){
            missingNum^=arr[i];
        }
        System.out.println("The missing number is "+missingNum);
    }
}
        
