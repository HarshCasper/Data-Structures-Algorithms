// Given an array arr[], find the maximum j – i such that arr[j] > arr[i]


import java.util.Scanner;
public class maxDiff{
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
        int maxDif=-1,j;
        for(i=0;i<n-1;i++){
            for(j=n-1;j>i;j--){
                if(arr[j]>arr[i] && maxDif<(j-i)){
                    maxDif=j-i;
                }
            }
        }
        System.out.println("The maximum difference is "+maxDif);
    }
}
        
