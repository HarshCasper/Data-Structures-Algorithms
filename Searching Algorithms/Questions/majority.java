/* Java Program to find the Majority Element in a given array. An element is majority if it occurs more than n/2 times in the array if
size of the array is n */

import java.util.Scanner;
public class majority{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n=s.nextInt();
        int i,j,element=-1,flag=0;
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int count=0;
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;}
                }
                if(count>=n/2){
                    element=arr[i];
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                System.out.println("The Majority Element is "+ element);
            }
            else{
                System.out.println("No Majority Element");
            }
        }
    }
