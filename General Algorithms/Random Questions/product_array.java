/* Given an array of length 'n' where n>1 return an array output such that output[i] is 
equal to the product of all array elements except arr[i] */

import java.util.Scanner;
public class product_array{
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
        int product=1;
        for(i=0;i<n;i++){
            product=product*arr[i];
        }
        System.out.println("The output is: ");
        for(i=0;i<n;i++){
            System.out.println(product/arr[i]);
        }
    }
}
