/* Given an array of length 'n' where n>1 return an array output such that output[i] is 
equal to the product of all array elements except arr[i]. Here no Divison Sign has been used! */

import java.util.Scanner;
public class product_array1{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n=s.nextInt();
        int i,j;
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        System.out.println("The output of the array is:");
        int product=1;
        for(i=0;i<n;i++){
            product=1;
            for(j=0;j<n;j++){
                if(arr[j]==arr[i]){
                    continue;
                }
                else{
                    product=product*arr[j];
                }
            }
            System.out.println(product);
        }
    }
}
            
