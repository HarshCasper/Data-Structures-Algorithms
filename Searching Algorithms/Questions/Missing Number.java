// Find a missing integer in a list which has n-1 integers and the integers are in the range of 1 to n with no duplicates in the list

import java.util.Scanner;
public class missing{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n=s.nextInt();
        int i;
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int sum=0,sum1=0;
        for(i=0;i<n;i++){
            sum=sum+arr[i];
        }
        sum1=n*((n+1)/2);
        
        System.out.println("The missing element is "+Math.abs(sum1-sum));
    }
}
        
