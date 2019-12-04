// Given an array of size n, find two elements whose sum is closest to zero 

import java.util.Scanner;
public class Near_Zero{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n,i,j,sum=0;
        System.out.println("Enter the number of elements in the array:");
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int min_sum,min_i=0,min_j=1;
        min_sum=arr[min_i]+arr[min_j];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                sum=arr[i]+arr[j];
                if(Math.abs(min_sum)>Math.abs(sum)){
                    min_sum=sum;
                    min_i=i;
                    min_j=j;
                }
            }
        }
            System.out.println("The two elements are: "+arr[min_i]+" "+arr[min_j]);
        }
    }
