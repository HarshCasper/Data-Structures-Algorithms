/* Find a missing integer in a list which has n-1 integers and the integers are in the range of 1 to n with no duplicates in the list
using XOR Operation */

import java.util.Scanner;
public class Missing_XOR{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int X=0,Y=0;
        System.out.println("Enter the number of elements in the array:");
        int n=s.nextInt();
        int i;
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
            Y^=arr[i];
        }
        for(i=1;i<=n+1;i++){
            X^=i;
        }
        System.out.println("The missing element is "+(X^Y));
    }
}
        
