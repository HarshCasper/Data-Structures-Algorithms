// Find the index of first 1 in a sorted array of 0’s and 1’s

import java.util.Scanner;
public class index_of_First{
    static int index(int arr[],int low,int high){
        while(low<=high){
            int mid=(low+high)/2;
            if (arr[mid] == 1 && (mid == 0 || arr[mid - 1]== 0)){
            return mid;
        }
        else if(arr[mid]==1){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        return -1;
    }
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
        int index=index(arr,1,n-1);
        if(index!=-1){
            System.out.println(index);
        }
    }
}
