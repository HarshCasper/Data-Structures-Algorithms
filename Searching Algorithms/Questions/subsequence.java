// Given an array of n elements find the Maximum Value Contiguous Subsequence

import java.util.Scanner;
public class subsequence{
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
        int maxSum=0,sum=0;
        for(i=0;i<n;i++){
            sum=Math.max(sum+arr[i],arr[i]);
            maxSum=Math.max(maxSum,sum);
        }
        System.out.println("The maximum value of contiguous subsequence is: "+maxSum);
    }
}
