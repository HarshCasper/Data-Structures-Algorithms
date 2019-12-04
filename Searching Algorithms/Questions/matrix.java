// Java Program to find the element in a Matrix 
import java.util.Scanner;
import java.util.Arrays;
public class matrix{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of rows in the array:");
        int n=s.nextInt();
        System.out.println("Enter the number of columns in the array:");
        int p=s.nextInt();
        int i,j,flag=0;
        int arr[][]=new int[n][p];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            for(j=0;j<p;j++){
                arr[i][j]=s.nextInt();
        }
    }
    System.out.println("Enter the element to be searched:");
    int element=s.nextInt();
    i=0;j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==element){
            System.out.println("Element found at position: ("+i+","+j+")");
            flag=1;
            break;
        }
        else if(arr[i][j]>element){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag==0){
        System.out.println("Element not found");
    }
}
}
